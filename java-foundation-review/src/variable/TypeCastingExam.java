package variable;

public class TypeCastingExam {
	
	public static void main(String[] args) {
		
		int x = 50000;
		long y = x;
		// int가 long보다 작은 자료형이기 때문에
		// int type의 값을 long으로 옮겨 담을 때는
		// 묵시적 형변환이 일어난다.
		
		long y2 = 5;
		//int x2 = y2;
		
		// long 은 int보다 큰 자료형이기 때문에
		// 설령 그 안에 작은 값 ( 이 경우엔  5 ) 이 담겨 있어도
		// long의 값을 int에 옮겨 담으려하면 컴파일러는 이를 판단할 수 없기에 에러가 발생한다
		// 이럴때는
		
		int x2 = (int)y2;
		// 위와 같이 변환시킬 타입의 이름을 명시해서
		// 강제 형변환을 시켜줘야 한다.
		
		
		System.out.println(Integer.MAX_VALUE);
		// int 최대값 : 2147483647
		
		long y3 = 21474836470L;
		
		System.out.println(y3);
		
		int x3 = (int)y3;
		System.out.println(x3);
		
	}
	


}
