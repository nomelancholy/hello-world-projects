package operator;

public class OperatorExam2 {
	public static void main(String[] args) {
		// 대입 연산
		int i = 10;
		int j = 10;

		// 비교 연산자
		System.out.println(i == j);
		System.out.println(i != j);
		System.out.println(i < j);
		System.out.println(i <= j);
		System.out.println(i > j);
		System.out.println(i >= j);
		
		// 복합 대입
		
		i += 10; // i = i + 10;
		System.out.println(i);
		// 20 출력
		
		i -= 5; // i = i - 5;
		System.out.println(i);
		// 15 출력 
		
	}
}
