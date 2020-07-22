package classAndObject;

public class MyClass {
	// 메소드 선언
	// 접근제한자 + 리턴타입 + 메소드명 + ( 파라미터 ) + { 구현 }
	public void method() {
		System.out.println("method 1 테스트");
	}

	public void method2(int x) {
		System.out.println(x + "를 이용한 method2 test");
	}

	public int method3() {
		System.out.println("method 3 실행");

		return 10;
	}

	public void method4(int x, int y) {
		System.out.println(x + " " + y + " method4 실행");
	}

	public int method5(int y) {
		System.out.println(y+" 이용한 m5 실행");
		
		return y * 2;
	}

}
