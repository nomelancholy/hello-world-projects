package inherit;

import classAndObject.Car;

public class BusExam {

	public static void main(String[] args) {
		Bus bus = new Bus();
		bus.run();
		// Bus 클래스는 Car 클래스를 상속받았기 때문에
		// bus에는 없지만 car에는 있는 run 메소드를 사용할 수 있다
		bus.ppangppang();
		
		Car car = new Car();
		
		car.run();
		
		//car.ppangppang();
		// 부모 클래스가 가진 메소드를 자식 클래스가 사용할 수는 있지만
		// 자식 클래스가 가지고 있는 메소드를 부모 클래스가 사용할 수는 없다
		
		// 부모 타입으로 자식 객체를 참조할 수는 있다.
		// 그러나 부모 타입이 알고 있는 메소드만 사용할 수 있고  
		// 자식 객체만 가지고 있는 메소드나 속성은 사용할 수 없다
		Car c = new Bus();
		// 부모타입으로 자식 타입의 객체를 참조할 때는 묵시적 형변환이 일어난다
		System.out.println("테스트");
		c.run();
		// 차 달림
		// 버스 달립니다
		// 출력
		
		//c.ppangppang();
		// 에러 발생 사용 불가
		
		// 이런 식으로 사용하기 위해선 클래스 형변환을 해줘야 한다
		// 상속 관계에 있을 때는 객체들 끼리도 형변환이 가능하다
		
		
		Bus bus2 = (Bus)c;
		// 위처럼 Car 타입이지만 Bus 로 생성된 객체는 Bus로 형변환이 가능하다.
		// 자식 타입으로 부모 객체를 참조할 때는 위와 같이 명시적으로 형변환 해줘야 한다
		bus2.ppangppang();
		
		// 그러나 Car로 생성된 car 변수는
		//Bus bus3 = (Bus)car;
		// Bus로 형변환해서
		//bus3.ppangppang();
		// Bus의 빵빵 메소드를 실행하면 상송 에러가 발생한다
		
	}
	
}
