# Spring boot jpa practice

## 소개

Tcademy에 올라온 김영한 님의 [JPA 프로그래밍 기본기 다지기](https://www.youtube.com/watch?v=WfrSN9Z7MiA&list=PL9mhQYIlKEhfpMVndI23RwWTL9-VL-B7U&index=2&t=3075s)를 듣고 실습한 저장소 입니다

## JPA

Java Persistence API. 즉 Java ORM 기술에 대한 API 표준 명세를 의미한다.

## ORM

Object Relational Mapping. 객체와 관계형 데이터 베이스를 자동으로 매핑해주는 역할을 한다.

## JPA 사용의 장점

SQL 중심적인 개발에서 벗어나 객체 지향적으로 개발할 수 있다.

## 객체 매핑하기

## Dialect (방언)

## 데이터베이스 스키마 자동 생성

DDL을 애플리케이션 실행 시점에 자동 생성 - 이렇게 생성된 DDL은 개발 장비에서만 사용해야 한다

- create : 기존 테이블 삭제 후 다시 생성 (DROP + CREATE)
- create-drop : create와 같으나 종료시점에 테이블 DROP
- update : 변경분만 반영 (운영DB에는 사용하면 안됨)
- validate : 엔티티와 테이블이 정상 매핑되었는지만 확인
- none : 사용하지 않음

## 매핑 어노테이션

- @Column : Column 매핑. (name, nullable, length) 옵션이 유용하다
- @Temporal : 날짜 타입 매핑
- @Enumerated : Enum 매핑. 항상 (EnumType.STRING) 옵션과 함께 써야한다.
- @Lob : CLOB, BLOB 매핑
- @Transient : 이 필드는 DB에 매핑하지 않는다 

## 식별자 매핑 방법

- @Id(직접 매핑)
- IDENTITY : 데이터베이스에 위임, MYSQL
- SEQUENCE : 데이터베이스 시퀀스 오브젝트 사용, ORACLE
- @SequenceGenerator 필요
- TABLE : 키 생성용 테이블 사용
- @TableGenerator 필요

### 권장하는 식별자 전략

- 기본 키 제약 조건 : null 아님, 유일, 변하면 안된다
- 미래까지 이 조건을 만족하는 자연키는 찾기 어렵다. 대리키(대체키)를 사용하자
- 예를 들어 주민등록번호도 기본 키로 적절하지 않다
- 권장 : Long + 대체키 + 키 생성전략 사용

## 단방향 매핑

한 객체에서 접근할 반대 객체를 선언하고 그에 대해 일대일, 일대다, 다대다, 다대일 등 관계를 설정해준다 
@JoinColumn 을 활용해 이 객체와 조인할 컬럼을 명시해주면 Entity에서 다른 객체에 접근 가능하다.

단 이렇게 해서 두 객체를 모두 가져오면 실행시점에 한번에 모두 가져온다 
이 때 매핑한 부분에 (fetch = FetchType.LAZY) 옵션을 주면 객체를 건드릴 때 각각 쿼리가 나가게 할 수 있다

## 양방향 매핑

한 쪽에서 반대편 객체에만 접근하는 게 아니고 반대편 객체에서도 객체를 선언해주고 관계를 맺어준다.

### mappedBy

왜 필요한가?

- 객체 연관 관계

    -   회원 -> 팀 연관관계 1개 (단방향)
    
    - 팀 -> 회원 연관관계 1개 (단방향)
 - 테이블 연관 관계
 
    -   회원 < - > 팀의 연관관계 1개 (양방향)
    
 객체의 양방향 관계는 사실 양방향 관계가 아니라 서로 다른 단방향 관계 2개다
 
 그러나 테이블은 외래키 하나로 두 테이블의 연관 관계를 관리한다.
 (MEMBER.TEAM_ID 하나로 양방향 연관 관계를 가진다)
 
 ex. 
 
 SELECT * FROM MEMBER M JOIN TEAM T ON M.TEAM_ID = T.TEAM_ID
 
 SELECT * FROM TEAM T JOIN MEMBER M ON T.TEAM_ID = M.TEAM_ID
 
 이 차이 때문에 객체에서 양방향 매핑 관계를 설정할 떄는 주인을 정해줘야 한다.
 
 이 때 사용하는 것이 mappedBy다.
 
 주인은 mappedBy 속성을 사용하지 않고 주인이 아닌 곳에만 mappedBy 속성을 지정해줘야 한다.
 
 주인이 아닌 쪽은 읽기만 가능하고 주인만이 외래 키를 관리( 등록, 수정) 할 수 있다.
 
 그렇다면 둘 중 누구를 주인으로 정하는 게 좋은가? 실무에선 테이블의 외래키가 있는 쪽을 주인으로 정하는 게 좋다.
 
 설계시엔 단방향으로 설계를 하고 필요할 때 양방향으로 뚫는 방법을 택하는 게 좋다
 
 ### 양방향 매핑의 장점
 
 단방향 매핑만으로도 이미 연관관계 매핑은 완료된다. 양방향 매핑은 반대 방향으로 조회 (객체 그래프 탐색) 기능이 추가된 것 뿐이다. 그러나 JPQL에서 역방향으로 탐색할 일이 많다.
    

## 연관 관계 매핑 어노테이션

- 다대일 (@ManyToOne)
- 일대다 (@OneToMany)
- 일대일 (@OneToOne)
- 다대다 (@ManyToMany) (일대다, 다대일로 풀어야 한다)
- @JoinColumn, @JoinTable

## 상속 관계 매핑 어노테이션

- @Inheritance
- @DiscriminatorColumn
- @DiscriminatorValue
- @MappedSuperclass(매핑 속성만 상속)   

## 영속성 컨텍스트

'엔티티를 영구 저장하는 환경'이라는 뜻. 눈에 보이지 않는 논리적인 개념이다. 엔티티 매니저를 통해 영속성 컨텍스트에 접근한다.

### 엔티티의 생명주기

- 비영속 (new/transient)

영속성 컨텍스트와 전혀 관계가 없는 상태

Member member = new Member();
member.setId("member1");
member.setUsername("회원1);

EntityManager em = emf.createEntityManager();
em.getTransaction().begin();

- 영속 (managed)

영속성 컨텍스트에 저장된 상태

em.persist(member);

- 준영속 (detached)

영속성 컨텍스트에 저장되었다가 분리된 상태

    - 준영속 상태로 만드는 방법
    
    1. em.detach(entity)
    특정 엔티티만 준영속 상태로 전환
    
    2. em.clear()
    영속성 컨텍스트를 완전히 초기화
    
    3. em.close()
    영속성 컨텍스트를 종료
    

em.detach(member);

- 삭제 (removed)

삭제된 상태

em.remove(member);

### 영속성 컨텍스트의 이점

- 1차 캐시 : 트랜잭션이 시작되고 끝날때까지 잠깐만 존재하는 캐시

- 동일성(identity) 보장 : 1차 캐시 덕분에

- 트랜잭션을 지원하는 쓰기 지연(transactional write-behind) : 쓰기 쿼리는 '쓰기 지연 SQL 저장소'에 담겨있다가 commit() 실행시 그 전에 수행되는 flush()를 활용해 한방에 날라간다 

    - 영속성 컨텍스트를 플러시 하는 방법
    
    1. em.flush() 직접 호출
    
    2. 트랜잭션 커밋 - 플러시 자동 호출
    
    3. JPQL 쿼리 실행 - 플러시 자동 호출

- 변경 감지 (Dirty Checking) : 영속 컨텍스트 내부에 저장된 것들은 하나만 바뀌어도 변경된 것을 감지한다.

- 지연 로딩 (Lazy Loading) : 즉시 로딩하면 예상하지 못하는 SQL이 발생한다. 지연 로딩을 기본으로 하고 필요시 다른 옵션을 써서 컨트롤 하는 게 좋다

## JPQL 

JPA를 사용하면 엔티티 객체를 중심으로 개발하기 좋지만 문제는 검색 쿼리다. 예를 들어 나이가 18세 이상인 회원만 가지고 오려면 쿼리를 쓸 수 밖에 없다.

이는 SQL과 문법은 유사하나 JPQL은 엔티티 객체를 대상으로 쿼리를 하고 SQL은 데이터베이스 테이블을 대상으로 쿼리를 한다. 대소문자를 구분하고 별칭은 필수다.

### 예시

String jpql = "select m from Member m where m.age > 18"

List<Member> result = em.createQuery(jpql,Member.class).getResultList();

### 결과 조회 API

- query.getResultList() : 결과가 하나 이상, 리스트 반환

- query.getSingleResult() : 결과가 정확히 하나, 단일 객체 반환(정확히 하나가 아니면 예외 발생)

### 파라미터 바인딩 - 이름 기준, 위치 기준

- 이름 기준

```
SELECT m FROM Member m where m.username =:username
query.setParameter("username",usernameParam);
```

- 위치 기준

```
SELECT m FROM Member m where m.username = ?1
query.setParameter(1, usernameParam);
```

### 프로젝션

- SELECT m FROM Member m -> 엔티티 프로젝션
- SELECT m.team FROM Member m -> 엔티티 프로젝션
- SELECT username,age FROM Member m -> 단순 값 프로젝션
- new 명령어 : 단순값을 DTO로 바로 조회
    
  ```SELECT new jpabook.jpql.UserDTO(m.username, m.age) FROM Member m```
  
  - DISTINCT는 중복 제거

### 페이징 API

- JPA는 페이징을 다음 두 API로 추상화

- setFirstResult()

- setMaxResult()

- ex)

String jpql = "select m from Member m order by m.name desc";

List<Member> resultList = em.createQuery(jpql, Member.class).setFirstResult(10).setMaxResults(20).getResultList();

### 집합과 정렬

select
    COUNT(m),
    SUM(m.age),
    AVG(m.age),
    MAX(m.age),
    MIN(m.age)
 from Member m

### 조인

- 내부 조인

SELECT m FROM Member m [INNER] JOIN m.team t

- 외부 조인

SELECT m FROM Member m LEFT [OUTER] JOIN m.team t

- 세타 조인

SELECT count(m) FROM Member m, Team t where m.username = t.name

- 페치 조인

SELECT m FROM Member m join fetch m.team

### JPQL 기본 함수

서브 쿼리, EXISTS,IN , BETWEEN, LIKE ,IS NULL , CONCAT,SUBSTRING, TRIM, LOWER, UPPER, LENGTH, LOCATE, ABS, SQRT, MOD, SIZE, INDEX(JPA용) , CASE WHEN... 전부 가능

### 사용자 정의 함수 호출 가능

select function('group_concat, i.name) from Item i

### Named 쿼리 - 어노테이션

컴파일 시점에 에러를 잡을 수 있게 하기 위해 쿼리를 미리 적어 name과 매핑시켜놓고 사용한다.


```
@Entity
@NamedQuery(
    name = "Member.findByUsername",
    query = "select m from Member m where m.username = :usernmae"
)
public class Member {
    ...
}

List <Member> resultList = 
    em.createNamedQuery("Member.findByUsername", Member.class)
    .setParameter("username", "회원1")
    .getResultList();
```


## Spring Data JPA

- 지루하게 반복되는 CRUD 문제를 세련된 방법으로 해결한다
- 개발자가 interface만 만들고 JpaRepository만 상속받으면 공통으로 구현 가능한 모든 기능을 사용할 수 있다
- 관례를 활용해 메서드 이름만으로 검색 쿼리를 생성해주기도 한다

### Sort

```
public interface MemberRepository extends JpaRepository<Member, Long> {
    List<Member> findByName(String username, Sort sort);
}

ORDER BY 가 붙어서 실행된다
```

### Paging

```
public interface MemberRepository extends JpaRepository<Member, Long> {
    Page<Member> findByNmae(String name, Pageable pageable);
}


@GetMapping("/hello")
public Page<Member> member(){
    PageRequest request = PageRequest.of(1,10);
    return repository.findByName("hello", request);
}
```

결과값이 페이징 되서 날아온다!

### Web 도메인 클래스 컨버터 기능 

- 컨트롤러에서 식별자로 도메인 클래스를 찾을 수도 있다

`/members/100`

```
@RequustMapping("/members/{memberId}")
Member member (@PathVariable("memberId") Member member) {
    return memeber;
}
```

## QueryDSL (17분 50분 부터)

### SQL,JPQL의 문제점
 
SQL,JPQL은 문자, Type-check가 불가능하고 해당 로직 실행전까지 작동 여부 확인 불가

### QueryDSL 장점

- 문자가 아닌 코드로 작성해 컴파일 시점에 문법 오류를 발견할 수 있고 IDE의 도움을 받을 수 있다.

### 사용

```jpaql
JPAFactoryQuery query = new JPAQueryFactory(em);
QMember m = QMember.memer;

List<Member> list = query.selectFromm(m)
                         .where(m.age.gt(18))
                         .orderBy(m.name.desc())
                         .limit(10)
                         .offset(10)
                         .fetch();
```

### 동적쿼리

```jpaql
String name = "member";
int age = 9;

QMember m = QMember.member;

BooleanBuilder builder = new BooleanBuilder();
if(name != null) {
    builder.and(m.name.contains(name));
}if(age != 0) {builder.and(m.get.gt(age)};

List<Member> list = 
query.selectFrom(m).where(builder).fetch();
```

### 이것은 자바다

```
retrun query.selectFrom(coupon)
            .where(coupon.type.eq(typeParam), isServiceable() ).fetch();

private BooleanExpression isServiceable() {
    return coupon.status.eq("LIVE").and(marketing.viewCount.lt(marketing.maxCount));
}

```