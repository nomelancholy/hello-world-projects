package array;

public class ArrayExam2 {

	public static void main(String[] args) {
		int [][] array4 = new int[3][4];
		// 정수를 4개씩 담을 수 있는 배열 3개를 가진 이차원 배열 생성
		
		// 0 0 0 0
		// 0 0 0 0
		// 0 0 0 0 
		// 형태
		
		//array4[0] = 10;
		// 위 라인은 에러 발생
		
		array4[0][0] = 10;
		// 이차원 배열의 값은 위와 같이 넣어줘야 한다.
		
		// 이렇게 하면
		// 10 0 0 0
		// 0 0 0 0
		// 0 0 0 0 
		// 형태
		
		// 가변 크기 배열을 생성할 수도 있다.
		int[][] array5 = new int[3][];
		// 위와 같이 선언하면 '배열을 3개 만들건데 길이는 아직 안정했어' 다. 
		// 그렇기 때문에
		
		//array5[0][0] = 10;
		//System.out.println(array5[0][0]);
		// 위 코드는 nullPPointer 에러가 발생한다.
		
		// 이러한 이차원 가변배열을 사용하기 위해선 
		
		array5[0] = new int [2];
		// 위와 같이 먼저 길이를 정해줘야 한다
		
		// 이후 값을 대입하면
		
		array5[0][0] = 10;
		System.out.println(array5[0][0]);
		// 10이 잘 출력된다
		
		array5[1] = new int[3];
		array5[2] = new int[4];
		
		// 다른 부분도 위와 같이 생성해 줄 수 있다
		
		// 이차원 배열 이상의 다차원 배열도 같은 방법으로 생성할 수 있다
		
	}
	
}
