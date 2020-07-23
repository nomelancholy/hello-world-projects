# 지인 정보 관리 시스템

## Hello world

프로젝트 생성 및 HelloWorldController Class 작성

## HelloWorldControllerTest Class 작성

helloWorld method 와 mockMvcTest method 생성
단순 controller test method와 mockMvc를 활용한 test method의 차이 확인

`mockMvc 를 활용해야 http api에 대한 제대로 된 test 가능`

## JPA 시작

Person domain, repository, Test 생성
JPA 활용해 java 코드와 getter setter 만으로 db insert, select 문 실행되는 내역 확인

### lombok

@Getter, @Setter, @ToString, @ToString.Exclude 어노테이션 활용
@NoArgsConstructor, @AllArgsConstructor, @RequiredArgsConstructor with @NonNull 어노테이션 활용
@EqualsAndHashCode, @Data 어노테이션 활용

​
@Getter: Gettet 자동 생성
@Setter : Setter 자동 생성
@ToString : ToString 자동 생성
@ToString(exclude = "A") : A제외하고 ToString생성
@NoArgsConstructor : 기본 생성자 생성
@AllArgsConstructor : 모든 필드값을 파라미터로 받는 생성자 생성
@RequiredArgsConstructor : final이나 @NonNull 이 붙어있는 필드값만을 파라미터로 받는 생성자 생성
@EqualsAndHashCode : 
@Data : 

## JPA Relation

### @OneToOne Relation

### Java Stream, Filter, Map

### @OneToOne : CascadeType / FetchType / optional, orphanRemoval

### JPA Query Method 의 문법 및 활용

### JPA @Embedded, Embeddable / @Valid / @Query

### Data.sql 사용하기 / 테스트 정리 / 테스트 자동화