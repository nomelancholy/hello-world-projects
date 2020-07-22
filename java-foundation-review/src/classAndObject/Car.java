package classAndObject;

public class Car {
	// Car Class = Car란 객체를 만들기 위한 틀
	
	// 자동차로 예를 들면 
	// 자동차는 자동차 이름, 자동차 번호를 가지고 있고
	// 이렇게 가지고 있는 걸 속성이라고 하고 자바에서는 이런 속성을 필드라고 한다
	
	// 생성자가 하나도 없을 때는 
	// 컴파일러가 기본 생성자를 자동으로 생성되지만
	// 생성자를 하나라도 만들 경우엔 기본 생성자를 만들어주지 않는다.
	
	// 생성자 오버로딩을 활용해 매개변수의 갯수나 타입이 다르면
	// 같은 이름으로 여러개의 생성자를 만들 수 있다
	public Car() {
		
		// 만약 이렇게 아무런 매개변수도 없이 생성자가 호출 됐을 때
		// '이름 없음'을 name으로 0 을 number로 넣어주고 싶으면
		
//		this.name = "이름 없음";
//		this.number = 0;
		
		// 위와 같이 입력만 해도 가능하지만
		
		this("이름없음",0);
		
		// 이처럼 this 키워드를 활용해 
		// 파라미터가 2개인 생성자를 호출하면
		// 코드의 중복을 막을 수 있다
	}
	
	public Car(String name) {
		this.name = name;
		// this = 현재 객체, 자기 자신을 나타낸다
		// 그렇기 때문에 this.name하면 Car 클래스의 필드인 name을 가르킨다
		// this 없이 name이라고만 쓰면 블록 범위안의 name 그러니까 파라미터로 주어지는 name을 가르킨다
	}
	// String 변수 하나를 파라미터로 받아
	// 그 값을 name 속성이 참조하게 하는 생성자
	
	public Car(String name, int number) {
		System.out.println("Car의 생성자 입니다");
		this.name = name;
		this.number = number;
		// this = 현재 객체, 자기 자신을 나타낸다
		// 그렇기 때문에 this.name하면 Car 클래스의 필드인 name을 가르킨다
		// this 없이 name이라고만 쓰면 블록 범위안의 name 그러니까 파라미터로 주어지는 name을 가르킨다
	}
	
	// 필드 
	String name;
	// 자동차 이름이라는 속성
	
	int number;
	// 자동차 번호라는 속성
	public int gas;
	

	// 자동차는 달리고 멈추는 기능이 있다.
	// 이 객체가 가지고 있는 이런 기능을 메소드라고 한다
	public void run(){
		System.out.println("차 달림");
	}
	
	public void stop() {
		System.out.println("차 멈춤");
	}
	
}
