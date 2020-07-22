package exception;

public class ExceptionExam {

	public static void main(String[] args) {
		int i = 10;
		int j = 0;

		
		// 위와 같이 나눗셈 연산을 할 때 분모에 0이 들어올 가능성을 배제할 수 없다.
		// 즉 오류를 일으킬 가능성을 이렇게 개발자가 인지하고 있을 때 
		// 개발자가 코드에서 예외처리를 해줄 수 있다
		
		try {
			int k = i / j;
			System.out.println(k);
			System.out.println("main end");
		} catch (ArithmeticException e) {
				// catch할 예외의 종류를 명시할 수 있다
			System.out.println("0으로 나눌 수 없습니다" + e.toString());
			// TODO: handle exception
		}  finally { 
		// finally는 예외 발생 여부와 상관없이 무조건 실행
		// 	이 부분은 생략 가능
			System.out.println("무조건 실행");
		}
		
	}

}
