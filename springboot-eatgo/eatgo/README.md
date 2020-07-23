# 🍛 Eat-Go Project

## 🚀 개요
---
아샬님의 '스프링 부트 프로젝트 (레스토랑 예약 사이트 만들기)' 강의 실습 코드 저장소입니다.

## 🛴 진행
---
### Spring Boot Project 세팅
---

java8 / gradle / Spring Web / Spring devTools / lombok
### TDD 연습
---
red -> green -> refactoring
### Rest API
---
다양한 환경( 웹 / 모바일 동시 )에 접근하기 위해 활용

#### CRUD / HTTP Method
C : POST / R : GET / U : PUT/PATCH / D : DELETE

#### Resource (URL / URI로 접근)

##### Collection(Read(List), Create)

ex) 
- Read(List) : http://host/restaurants (GET)
- Create : http://host/restaurants  (POST)

##### Member(Read(Detail), Update, Delete)
ex)
- Read(Detail) : http://host/restaurants/{id} (GET)
- Update : http://host/restaurants/{id} (PUT/PATCH)
- Delete : http://host/restaurants/{id} (DELETE)

##### DATA 전달
JSON 형태로 상호 전달

### 가게 목록 / 상세
---

가게 목록 return method 작성 - 가게 상세 return method 작성 - repository 활용 중복 제거

### 의존성 주입 (Dependency Injection)
---

의존성 : 의존 관계 (둘 이상의 객체가 서로 협력하는 방법)

ex) A와 B가 의존 관계다 == A가 B를 사용한다 == B의 변화가 A에 영향

객체 간의 의존 관계를 줄이기 위해 ( 여러 객체를 다양하게 변경하고 쉽게 사용하기 위해 ) Spring에선 어노테이션을 활용해 Spring IoC Container가 의존성을 주입하도록 해준다.

- @Component : 이 어노테이션이 붙은 클래스에 대해 bean ( 스프링이 만든 자바 객체 ) 인스턴스를 생성 ( @Controller, @Service, @Repository 로 구체화 할 수도 있다 )

- @Autowired : 이 어노테이션이 붙은 필드의 Type에 따라 Spring이 알아서 Bean을 주입한다

- @SpyBean : 이 어노테이션이 붙은 필드의 의존성을 테스트코드에 주입해 줄 수 있다