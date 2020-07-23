package com.demo;

import com.demo.entity.Member;
import com.demo.entity.MemberType;
import com.demo.entity.Team;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.EntityTransaction;
import javax.persistence.Persistence;
import java.util.List;

@SpringBootApplication
public class Application {

    public static void main(String[] args) {

        EntityManagerFactory emf = Persistence.createEntityManagerFactory("hello");
        // hello는 persistence.xml에 선언한 <persistence-unit name="hello"> name
        // 엔티티 매니저 팩토리는 하나만 생성해서 애플리케이션 전체에서 공유해야 한다
        EntityManager em = emf.createEntityManager();
        // 엔티티 매니저는 쓰레드간에 공유하면 안된다 (사용하고 버려야 한다 )
        EntityTransaction tx = em.getTransaction();
        // jpa의 모든 행동은 Transaction 안에서 이뤄져야 한다
        tx.begin();

        try {
            Team team = new Team();
            team.setName("teamA");
            em.persist(team);

            Member member = new Member();
            member.setName("홍길동");
//            member.setTeamId(team.getId());
            member.setTeam(team);

            em.persist(member);

            em.flush();
            em.clear();

            Member findMember = em.find(Member.class, member.getId());

            findMember.setName("김말똥");

//            Long teamId = findMember.getTeamId();
//            Team findTeam = em.find(Team.class, team.getId());

            Team findTeam = findMember.getTeam();

            findTeam.getName();

            List<Member> members = findTeam.getMembers();

//            String jpql = "select m from Member m where m.name like '%helloe%'";;
            String jpql = "select m from Member m join fetch m.team";
            List<Member> result = em.createQuery(jpql, Member.class).getResultList();


            tx.commit();
        }catch (Exception e){
            tx.rollback();
        }finally {

            em.close();
        }

        SpringApplication.run(Application.class, args);

        emf.close();
    }
}