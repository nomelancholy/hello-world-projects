package kr.or.connect.main;


import org.springframework.context.ApplicationContext;
import org.springframework.context.annotation.AnnotationConfigApplicationContext;

import kr.or.connect.config.ApplicationConfig;

import javax.sql.DataSource;
import java.sql.Connection;

public class DataSourceTest {

    public static void main(String[] args) {
        ApplicationContext ac = new AnnotationConfigApplicationContext(ApplicationConfig.class);
        DataSource ds = ac.getBean(DataSource.class);
        Connection conn = null;
        try {
            conn = ds.getConnection();
            if(conn != null)
                System.out.println("접속 성공^^");
        }catch (Exception e) {
            e.printStackTrace();
        }finally {
            if(conn != null) {
                try {
                    conn.close();
                }catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }
    }

}
