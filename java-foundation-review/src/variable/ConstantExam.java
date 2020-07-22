package variable;

public class ConstantExam {

	public static void main(String[] args) {
		
		int i;
		
		i = 10;
		i = 5;
		// 변수 선언과 값 할당 예 
		
		
		final int J;
		// 상수를 선언할 때는 final 키워드를 붙이고 대문자 명명규칙을 사용한다.
		// 띄어쓰기가 필요한 경우 _ 을 활용한다
		
		J = 10;
		
	//	J = 5;
	// 에러 발생
		
		// 상수는 예를 들어 
		
		final int OIL_PRICE = 1390;
		
		final double PI = 3.141592653589793;
		
		System.out.println(PI);
		
		// 이런 기름값이 자주 사용되는 프로그램이 있을 때
		// 1390을 여기 저기서 사용하기 보다는 
		// 상수로 선언하고 OIL_PRICE를 1390의 값으로 사용할 때 주로 쓴다
		
		System.out.println(5 * 1390);
		
		
	}
	
}
