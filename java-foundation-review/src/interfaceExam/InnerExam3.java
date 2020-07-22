package interfaceExam;

public class InnerExam3 {

	public void exec() {
		
		// 메서드 안에서도 아래와 같이
		// 클래스를 지역변수처럼 가질 수 있다 
		class Cal {
			int value = 0;

			public void plus() {
				value++;
			}
		}
		
		Cal cal = new Cal();
		cal.plus();
		System.out.println(cal.value);
	}
	
	public static void main(String[] args) {
		InnerExam3 t = new InnerExam3();
		t.exec();
		// 메서드를 실행하면 내부의 Cal 클래스가 생성되고 plus가 수행되고 증가한 value가 출력된다
	}
	
}
