package operator;

public class OperatorExam4 {

	public static void main(String[] args) {
		
		int front = 1;
		// 증감 연산자를 앞에 붙일 변수 
		
		int back = 1;
		// 증감 연산자를 뒤에 붙일 변수
		
		++front;
		// 선위 증감 연산자 사용
		        
		back++;
		// 후위 증감 연산자
		        
		System.out.println(front);
		// 2출력
		        
		System.out.println(back);
		// 2출력
		
		int x = ++front + 1;
		// 선위 증감 연산자 사용하고 1과 더함
		
		int y = back++ + 1;
		// 후위 증감 연산자
		
		System.out.println(front);
		// 3출력
		
		System.out.println(back);
		// 3출력
		
		System.out.println(x);
		// 4출력
		
		System.out.println(y);
		// 3출력
		
		System.out.println(++front);
		// 4출력
		
		System.out.println(back++);
		// 3출력
		
		System.out.println(front);
		// 4출력
		
		System.out.println(back);
		// 4출력

		
		
		
		
		
	}
	
}
