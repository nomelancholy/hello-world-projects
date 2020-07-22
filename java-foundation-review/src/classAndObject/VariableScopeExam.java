package classAndObject;

public class VariableScopeExam {

	int globalScope = 10;
	static int staticVal = 7;
	
	public void scopeTest(int value) {
		int localScope = 20;
		
		System.out.println(globalScope);
		System.out.println(localScope);
		System.out.println(value);
		
	}
	
	public void scopeTest2 (int value2) {
		
		System.out.println(globalScope);
//		System.out.println(localScope);
//		System.out.println(value);
		// 에러 발생
		
	}
	
	public static void main(String[] args) {
		
		
//		System.out.println(globalScope);
//		System.out.println(localScope);
//		System.out.println(value);
		// 전부 에러 발생
		
		// main 메소드는 static한 메소드이다.
		// static한 메소드에서는 인스턴스화 하지 않거나 static하지 않은 필드를 사용할 수 없다.
		
		VariableScopeExam v1 = new VariableScopeExam();
		System.out.println(v1.globalScope);
		// 그렇기 때문에 클래스의 필드나 메소드를 사용하기 위해선 객체를 먼저 생성하고 사용해야 한다  
		
		// 그러나 static한 필드나 메소드는 인스턴스화 하지 않아도 사용할 수 있다
		System.out.println(staticVal);
		
		// 하지만 이 점을 주의해야 한다.
		VariableScopeExam v2 =new VariableScopeExam();
		
		v1.globalScope = 10;
		v2.globalScope = 20;
		
		System.out.println(v1.globalScope);
		// 10 출력
		System.out.println(v2.globalScope);
		// 20 출력
		
		// static하지 않은 멤버는 객체별로 공유되지 않는다.
		
		//하지만 static하게 선언된 변수는 값을 저장할 수 있는 공간이 하나만 생성된다.
		// 그러므로 인스턴스가 여러개 생성되도 static한 변수는 하나여서
		
		v1.staticVal = 10;
		v2.staticVal = 20;
		
		System.out.println(v1.staticVal);
		// 20 출력
		System.out.println(v2.staticVal);
		// 20 출력
		
		// 둘 다 20 출력한다.
		
		// 이런 static한 필드를 클래스 변수라고 하고
		// 클래스 변수는 레퍼번수.변수명 보다는 클래스명.변수명으로 
		
		System.out.println(VariableScopeExam.staticVal);
		
		// 위와 같이 사용하는 것이 더 바람직하다
		
	}
	
}
