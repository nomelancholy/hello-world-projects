package exception;

public class ExceptionExam2 {

	public static void main(String[] args) {
		int i = 10;
		int j = 0;
		try {
			int k = divide(i, j);
			System.out.println(k);
		} catch (ArithmeticException e) {
			System.out.println(e.toString());
		}

	}
										// throws를 활용하면 예외처리를 예외가 발생하게끔 호출한 부분에 위임할 수 있다
	public static int divide(int i, int j) throws ArithmeticException {
		int k = i / j;
		return k;
	}

}
