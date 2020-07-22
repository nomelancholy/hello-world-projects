package inherit;

import classAndObject.Car;

public class Truck extends Car {
	public Truck() {
		//super();
		//상속받은 클래스는 위 부분이 자동으로 생성된다. ( 생략되어 있음 )
		// 만약 부모 클래스에 기본 생성자가 없고 
		// String 변수 하나를 매개변수로 받는 생성자만 있다면
		// super("");
		// 이런 식으로 개발자가 직접 존재하는 생성자를 호출해줘야 한다
		System.out.println("Truck의 기본 생성자 입니다");
	}

}
