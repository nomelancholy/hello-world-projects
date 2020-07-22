package interfaceExam;

public class MyCalExam {

	public static void main(String[] args) {
		Calculator cal = new MyCal();
		
		
		cal.plus(3, 4);
		cal.muliple(5, 6);
		
		int i = cal.exec(5, 6);
		System.out.println(i);
		// 별다른 구현 없이 인터페이스에 defaul로만 선언한 메소드가 잘 실행된다
		// 이런 기능의 도입으로 인터페이스가 변경되면 
		// 인터페이스를 구현하는 모든 클래스들이 해당 메소드를 구현해야 하는 문제를 해결할 수 있다 
		
		// static한 메소드는 인터페이스명.메소드 형식으로 호출할 수 있따
		Calculator.exec2(3, 4);
		// 인터페이스에 static 메소드를 선언함으로써, 인터페이스를 이용하여 간단한 기능을 가지는 유틸리티성 인터페이스를 만들 수 있게 되었다.
	}
	
}
