package operator;

public class OperatorExam6 {

	public static void main(String[] args) {
		
		int b1 = ( 5 < 4 ) ? 50 : 40;
		
		System.out.println(b1);
		
		// 삼항연산자 - ? 앞의 조건이 참이면 b1에 50이, 거짓이면 40이 들어간다. 
		
		// 이것은
		
		int b2 = 0;
		
		if( 5 < 4) {
			b2 = 50;
		}else {
			b2 = 40;
		}
		
		// 위 if문과 같다
		
		System.out.println(b2);
		
	}
	
}
