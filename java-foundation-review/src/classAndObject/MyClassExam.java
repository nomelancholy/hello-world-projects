package classAndObject;

public class MyClassExam {

	public static void main(String[] args) {
		MyClass myclass = new MyClass();
		// MyClass 의 메소드를 사용하려면 MyClass 객체를 먼저 사용해야 한다.
		
		// 메소드 사용은
		// MyClass 클래스를 참조하는 레퍼런스 변수.메소드명() 으로 사용할 수 있다
		
		
		myclass.method();
		myclass.method2(10);
		myclass.method3();
		myclass.method4(5, 10);
		myclass.method5(10);
		
	}
	
}
