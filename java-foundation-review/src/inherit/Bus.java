package inherit;

import classAndObject.Car;

public class Bus extends Car {
	
	public void run() {
		super.run();
		// 이렇게 super 키워드를 활용해 부모의 run 메소드를 함께 사용할 수도 있다
		System.out.println("버스 달립니다");
	}
	// 부모 클래스가 가지고 있는 메소드를 자식 클래스에서 재정의해서 사용할 수도 있다
	// 이를 메소드 오버라이딩이라고 한다
	
	void ppangppang() {
		System.out.println("빵빵");
	}
	// 부모가 가지고 있는 메소드외에 추가로 메소드를 선언하는 것을 확장하였다고 표현한다

}
