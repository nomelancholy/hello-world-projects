package interfaceExam;

public interface Calculator {

	public int plus(int i, int j);
	public int muliple (int i, int j);
	
	default int exec(int i, int j) {
		return i + j;
	}
	
	// Java8의 interface에서는 
	// 인터페이스가 default키워드로 선언되면 메소드가 구현할 수 있다. 
	// 또한 이를 구현하는 클래스는 default메소드를 오버라이딩 할 수 있다.
	
	public static int exec2(int i, int j) {
		return i * j;
	}
	// static 메소드도 구현이 가능하다
}
