package junit4;

import org.junit.runner.RunWith;
import org.junit.runners.Suite;
import org.junit.runners.Suite.SuiteClasses;

// 여러 테스트 클래스는 이렇게 사용한다
@RunWith(Suite.class)
@SuiteClasses(value = { ATest.class , BTest.class , CTest.class, Junit4Test.class })
public class ABCJTest {

}
