package operator;

public class OperatorExam {
	
	public static void main(String[] args) {
		int i1 = -5;
		System.out.println(i1);
		// -5 출력
		
		int i2 = +i1;
		System.out.println(i2);
		// - 5 출력
		// + 연산자가 붙었는데도 5가 출력되지 않고 -5가 출력되는 것은
		// java에서 변수 앞에 붙는 + 연산자는 원래 가지고 있는 부호를 유지시켜주는 역할을 하고
		// - 연산자가 음수는 양수로, 양수는 음수로 바꿔주는 역할을 한다. 
		// 그래서
		
		int i3 = -i1;
		System.out.println(i3);
		// 위는 5가 출력된다.
		
		int i4 = ++i3; // i3 = i3+1;
		System.out.println(i4);
		// 6출력
		System.out.println(i3);
		// 6출력
		
		int i5 = i3++; // i3 = i3 + 1;
		
		System.out.println(i5);
		// 7이 아닌 6출력
		System.out.println(i3);
		// 7이 출력
		
		// 증감 연산자가 변수 앞에 붙어 있을 경우
		// 증감을 먼저 수행하고 값에 대입하기 때문에 i4는 6이 나오지만
		
		// 증감 연산자가 변수 뒤에 붙어 있을 경우
		// 가지고 있는 값을 변수에 먼저 대입하고 이후에 증감 연산을 수행하기 때문에 i5는 7이 아닌 6이 나온다
		
		int i = 5;
		int j = 2;
		
		System.out.println(i + j);
		// 7 출력
		System.out.println(i - j);
		// 3출력
		System.out.println(i * j);
		// 10 출력
		System.out.println(i / j);
		// 정수끼리의 연산은 정수를 리턴하기 때문에 2가 출력된다
		System.out.println(i / (double)j);
		// 둘 중 하나라도 실수형 타입으로 형변환 후 연산을 수행하면 2.5가 출력되는 걸 확인할 수 있다
		
		System.out.println(i % j);
		// 나머지 1출력
		
	}

}
