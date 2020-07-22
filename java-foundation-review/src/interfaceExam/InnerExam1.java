package interfaceExam;

public class InnerExam1 {

	class Cal {
		int value = 0;

		public void plus() {
			value++;
		}
	}
	// InnerExam1 안에 있는 Cal 클래스

	public static void main(String[] args) {
		InnerExam1 t = new InnerExam1();
		// InnerExam1 클래스 메모리에 올림
		InnerExam1.Cal cal = t.new Cal();
		// 내부클래스는 위와 같은 형태로 인스턴스화 한다
		cal.plus();
		System.out.println(cal.value);
	}

}
