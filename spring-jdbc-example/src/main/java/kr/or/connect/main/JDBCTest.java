package kr.or.connect.main;

import kr.or.connect.config.ApplicationConfig;
import kr.or.connect.dao.MeetingsDao;
import kr.or.connect.dto.Meeting;
import org.springframework.context.ApplicationContext;
import org.springframework.context.annotation.AnnotationConfigApplicationContext;

import java.time.LocalDateTime;

public class JDBCTest {
    public static void main(String[] args) {
        ApplicationContext ac = new AnnotationConfigApplicationContext(ApplicationConfig.class);

        MeetingsDao meetingsDao = ac.getBean(MeetingsDao.class);

        Meeting meeting = new Meeting();
//        meeting.setId(2);
//        meeting.setTitle("두번째 회의");
//        meeting.setVideoLink("www.test2.com");
//        meeting.setResultLink("www.test2.com");
//        LocalDateTime localDateTime = LocalDateTime.of(2020,9,28,16,25);
//        meeting.setDate(localDateTime);
//
//        int count = meetingsDao.insert(meeting);

        meeting.setId(2);
        meeting.setVideoLink("www.videoLink.com");

        int count = meetingsDao.update(meeting);
        System.out.println(count);

    }
}
