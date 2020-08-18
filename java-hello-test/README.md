# Java Test

[부스트코스 웹 백엔드 과정 - Test Part](https://www.edwith.org/boostcourse-web-be/lecture/58976/)강의를 보고 실습한 Repository 입니다

## Junit

### 주로 사용되는 어노테이션

Junit을 이용하는 테스트 클래스에서 주로 사용되는 어노테이션

- @BeforeClass : 테스트가 실행되기 전에 딱 한번 실행됨
- @AfterClass : 테스트 클래스의 모든 테스트 메소드가 실행이 끝나고 딱 한번 실행됨
- @Before : 테스트가 실행되기 전에 시행됨
- @After : 테스트 메소드가 실행된 후에 실행됨
- @Test : 테스트 메소드를 가르킴

### 중요 assert

Junit의 다양한 assert 메소드 중 주로 사용되는 메소드는 다음과 같다

- assertEquals(x,y) : 예상 값 x와 실제 값 y가 같으면 테스트 성공
- assertArrayEquals(a,b) : 배열 a와 b가 일치하면 테스트 성공
- fail() : 테스트 실패
- assertTrue(x) : x가 true 면 테스트 성공
- assertNull (o) : 객체 o가 null 이면 테스트 성공
- assertNotNull (o) : 객체 o가 null 이 아니면 테스트 성공
- assertSame(ox, oy) : 객체 ox와 oy가 같은 객체임을 확인한다. 같은 객체를 참조하고 있으면 테스트 성공
- assertNotSame(ox, oy) : 객체 ox와 oy가 같은 객체를 참조하지 않고 있으면 테스트 성공
