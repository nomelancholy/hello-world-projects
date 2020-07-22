package array;

public class ArrayWithFor {

	public static void main(String[] args) {

		int[] iarray = new int[100];

		for (int i = 0; i < iarray.length; i++) {
			iarray[i] = i + 1;
		}
		
		// 변수는 블락범위 안에서만 유효하다
		// 변수 i 같은 경우 위 반복문 안에 선언되어 있지만
		// 그 유효범위가 위 for 문의 블록 범위를 벗어나지 않기 때문에
		// 아래에서 또 다시 int i 변수를 선언해도 문제가 되지 않는다.
		
		// 같은 이유로 예를 들어 배열의 값을 꺼내 모두 더해 출력하고 싶다면
		// 변수를 for문 밖에 선언해야 한다. 그래야만 반복문 밖에서도 유효하기 때문
		
		int sum = 0;
		
		for (int i = 0; i < iarray.length; i ++) {
			sum += iarray[i];
		}
		
		System.out.println(sum);
		// 5050 출력

	}

}
