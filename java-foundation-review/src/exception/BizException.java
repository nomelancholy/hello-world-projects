package exception;

public class BizException extends RuntimeException {
	// Exception이나 RuntimeException을 상속받아서
	// 사용자 정의 Exception을 만들 수도 있다.
	
	// Exception 클래스를 상속 받아 정의하면
	// 반드시 오류를 처리 해야만 하는 checked Exception이 되고

	// RuntimeException 클래스를 상속 받아 정의하면
	// 예외 처리하지 않아도 컴파일 시에는 오류를 발생시키지 않는 unChecked Exception 이 된다

	// 부모 Exception 클래스에 처리 생성자들은 있으니 부모 생성자 호출
	public BizException(String msg) {
		super(msg);
	}
	
	public BizException(Exception ex) {
		super (ex);
	}

}
