package junit4;

import static org.junit.Assert.*;

import org.junit.*;


public class Junit4Test {

	@BeforeClass
	public static void setUpBeforeClass() throws Exception {
		// BeforeClass를 선언한 메소드는 static이어야 한다
		System.out.println("BeforeClass");
	}

	@AfterClass
	public static void tearDownAfterClass() throws Exception {
		// AfterClass를 선언한 메소드도 static이어야 한다
		System.out.println("AfterClass");
	}

	@Before
	public void before() {
		System.out.println("before");
	}

	@After
	public void after() {
		System.out.println("after");
	}

	// NumberFormatException 이 발생하면 통과 / 아니면 실패
	@Test(expected = NumberFormatException.class)
	public void testException() {
		String value = "a108";
		System.out.println(Integer.parseInt(value));
	}

	// 5 밀리초 안에 실행되지 않으면 실패
	@Test(timeout = 5)
	public void testPingback() throws Exception {
		int result = 0;

		for (int i = 0; i < 1000000; i++) {
			result += i;
		}

		assertEquals(1783293664, result);
	}

	// @Ignore 어노테이션이 붙은 테스트는 실행되지 않는다
	@Ignore
	@Test
	public void testIgnore() throws Exception {
		System.out.println("ignore test");
	}

	@Test
	public void testArrayAssertEquals() throws Exception {
		String[] names = { "Tom", "JIMMY", "JOHIN" };
		String[] anotherNames = { "Tom", "JIMMY", "JOHIN" };
		//String[] anotherNames = { "Tom", "JOHIN", "JIMMY" };
		// 배열 안의 값 집합은 동일하더라도 순서가 다르면 테스트가 실패한다
		assertArrayEquals(names, anotherNames);
	}
	
	

}
