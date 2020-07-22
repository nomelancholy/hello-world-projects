package array;

public class ArrayExam {

	public static void main(String[] args) {
		
		// 배열은 같은 데이터 타입을 가진 연속된 메모리 공간으로 이루어진 자료구조이다
		// 같은 데이터 타입을 가진 여러개의 변수가 필요할 때 사용한다
		
		int[] array1 = new int[100];
		// 정수 100개를 저장할 수 있는 배열 선언
		
		array1[0] = 50;
		// 배열의 0번째 공간에 50 대입
		array1[50] = 100;
		// 배열의 50번째 공간에 100 대입
		
		System.out.println(array1[30]);
		// 정수형 배열에서 아무것도 대입하지 않은 공간은 0출력
		
		int[] array2 = new int[] {1,2,3,4};
		// 배열 생성하며 초기화
		
		int[] array3 = {1,2,3,4};
		// 배열 생성하며 초기화하는 다른 방법
		
		System.out.println(array2[3]);
		// 4출력
		System.out.println(array3[3]);
		// 4출력
		
		// 배열 변수는 하나인데 값이 여러개 들어가는 걸 확인할 수 있다.
		// 즉 배열은 기본 데이터 타입이 아닌 참조형 데이터 타입임을 알 수 있다.
		
	}
	
}
