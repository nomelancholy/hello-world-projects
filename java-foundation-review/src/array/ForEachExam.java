package array;

public class ForEachExam {

	public static void main(String[] args) {
		
		int[] arr = {10,20,30,40,50};
		
		for(int i = 0; i < arr.length; i++) {
			System.out.println(arr[i]);
		}
		
		// 위의 for문은 foreach 구문을 활용해서
		System.out.println("");
		
		for(int value : arr) {
			System.out.println(value);
		}
		
		// 위와 같이 표현할 수도 있다
		
		
	}
	
}
