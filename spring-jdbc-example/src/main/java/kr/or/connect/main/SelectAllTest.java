package kr.or.connect.main;


import kr.or.connect.config.ApplicationConfig;
import kr.or.connect.dao.MeetingsDao;
import kr.or.connect.dto.Meeting;
import org.springframework.context.ApplicationContext;
import org.springframework.context.annotation.AnnotationConfigApplicationContext;

import java.util.List;

public class SelectAllTest {

    public static void main(String[] args) {
        ApplicationContext ac = new AnnotationConfigApplicationContext(ApplicationConfig.class);

        MeetingsDao meetingsDao = ac.getBean(MeetingsDao.class);

        List<Meeting> list = meetingsDao.selectAll();

        for (Meeting meeting : list) {
            System.out.println(meeting);
        }

    }

}
