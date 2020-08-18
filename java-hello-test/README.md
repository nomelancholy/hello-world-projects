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

## Test with Spring and Mock

1. @RunWith(SpringJUnit4ClassRunner.class) 어노테이션을 활용해 JUnit 이 테스트 코드를 실행할 때 스프링 빈 컨테이너가 내부적으로 생성되도록 하고
2. @ContextConfiguration(classes = {ApplicationConfig.class})로 내부적으로 생성된 스프링 빈 컨테이너가 사용할 설정파일을 지정하고
3. @Autowired를 활용해테스트랑 클래스를 주입하면

스프링에서 빈으로 관리되는 클래스도 테스트 할 수 있다. 
 
 좀 더 정확히 로직만 테스트 하기위헤선 가짜 객체를 생성해주는 Mock 프레임워크 Mockito 를 사용할 수도 있다. 
 
 1. @RunWith(MockitoJUnitRunner.class) 어노테이션을 활용해 MockitoJunitRunner 가 테스트 클래스를 실행하도록 하고
 2. @Mock 어노테이션을 활용해 로직과 직접적인 연관이 없는 클래스가 목 객체를 참조하도록
 3. @InjectMocks 어노테이션을 활용해 테스트 하려는 클래스가 그 목 객체를 사용하도록 하고
 4. Mockito 에서 제공하는 static 메소드인 given 을 활용해 특정 클래스의 메소드가 항상 일정한 값을 리턴하게 하고
 5. 역시 같은 종류의 static 메소드인 verify 로 mock 으로 처리한 클래스의 메소드가 정말로 호출되었는지 검증하는 방식으로 
 
 Mock 객체를 활용할 수 있다.