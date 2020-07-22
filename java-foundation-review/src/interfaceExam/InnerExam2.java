package interfaceExam;

public class InnerExam2 {

	static class Cal {
		int value = 0;

		public void plus() {
			value++;
		}
	}
	// InnerExam2 안에 있는 Static한 내부 Cal 클래스

	public static void main(String[] args) {
		
		InnerExam2.Cal cal = new InnerExam2.Cal();
		// static 한 클래스도 static 필드와 같이 
		// 외부 클래스 생성 없이 위와 같이 생성 가능하다
		cal.plus();
		System.out.println(cal.value);
	}

}
