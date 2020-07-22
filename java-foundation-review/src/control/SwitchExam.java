package control;

public class SwitchExam {

	public static void main(String[] args) {
		
		// switch, case, default, break;
		
		// switch 문은 true인 케이스를 만나면 거기서부터 쭉 실행된다.
		// 그렇기 때문에 그 값에 해당하는 결과만 얻고 싶다면 case 마지막 부분에 항상 break를 써줘야 한다
		
		int value = 1;
		
		switch (value) {
		case 1:
			System.out.println("1");
			break;
		case 2:
			System.out.println("2");
			break;
		case 3:
			System.out.println("3");
			break;
		default:
			System.out.println("그 외 다른 숫자");
			break;
		}
		
	}
	
}
