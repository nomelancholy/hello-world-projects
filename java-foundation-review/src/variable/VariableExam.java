package variable;

public class VariableExam {

	public static void main(String[] args) {
		int count;
    // 타입 + 변수이름
		
		count = 10;
		
		System.out.println(count);
		// 10출력
		
		count = 20;
		
		System.out.println(count);
		// 20 출력 
		
		// count =11.1
		// 에러 발생
		
		double avg = 11.1;
		// 자바는 모든 변수 타입이 컴파일 시에 결정되는 강형 언어라
		// 변수에 담을 데이터 타입을 정확히 선언하고 거기에 맞는 데이터를 할당해야 한다.
		
	}
	
}
