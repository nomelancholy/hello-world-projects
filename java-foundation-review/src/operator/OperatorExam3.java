package operator;

public class OperatorExam3 {
	
	public static void main(String[] args) {
		
		int a = 5;
		int b = 10;
		int c = 15;
		
		System.out.println(a - b * c);
		// - 145 출력
		System.out.println((a - b) * c);
		// - 75 출력
		System.out.println(a > 5 && b > 5);
		// false 출력
		System.out.println(a > 5 || b > 5);
		// true 출력
		System.out.println(++ a - 5);
		// 1 출력
		System.out.println(a);
		// 6출력
		System.out.println(a++ - 5);
		// 1 출력
		System.out.println(a);
		// 7출력
	}

}
