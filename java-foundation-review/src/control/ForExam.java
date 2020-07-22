package control;

public class ForExam {

	public static void main(String[] args) {
		
		int total = 0;
		
		for (int i = 1; i <= 100; i++) {
			if(i % 2 != 0) {
				continue;
				// 반복중 continue를 만나면 
				// continue 아래 구문이 실행되지 않고 반복문 처음으로 올라가서 증감이 작동한다
				// 
			}
			total += i;
			
			if(i == 50) {
				break;
				//break를 만나면 반복문을 아예 빠져나온다.
			}
		}
		
		System.out.println(total);
	}

}
