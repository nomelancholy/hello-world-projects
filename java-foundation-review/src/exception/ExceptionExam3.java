package exception;

public class ExceptionExam3 {

	public static void main(String[] args) {
		int i = 10;
		int j = 0;

		// 예외 처리
		try {
			int k = divide(i, j);
			System.out.println(k);
		} catch (IllegalArgumentException e) {
			System.out.println(e.toString());
		}


	}

	// throws를 활용하면 예외처리를 예외가 발생하게끔 호출한 부분에 위임할 수 있다
	public static int divide(int i, int j) throws IllegalArgumentException {

		if (j == 0) {
			//System.out.println("2번째 매개변수는 0이면 안됩니다");
			//return 0;
			
			// 위의 코드를 예외 강제 발생을 활용해  
			// 아래와 같이 처리할 수도 있다
					// 강제 발생시키는 예외 종류
			throw new IllegalArgumentException("2번째 매개변수는 0이면 안됩니다");

		}

		int k = i / j;
		return k;
	}

}
