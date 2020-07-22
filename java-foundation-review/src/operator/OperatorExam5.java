package operator;

public class OperatorExam5 {
	
	public static void main(String[] args) {
		
		boolean b1 = true;
		boolean b2 = false;
		boolean b3 = true;
		
		// && = 둘다 true 여야 true
		System.out.println(b1 && b2);
		System.out.println(b1 && b3);
		
		
		// || 둘 중 하나만 참이어도 true 
		System.out.println(b1 || b2);
		System.out.println(b1 || b3);
		
		
		// ^ 둘의 결과가 달라야 true
		System.out.println(b1 ^ b2);
		System.out.println(b1 ^ b3);
		
		// ! 피연산자의 논리 값을 바꿈 true -> false / false -> true
		System.out.println(!b1);
		System.out.println(!b2);
		
	}

}
