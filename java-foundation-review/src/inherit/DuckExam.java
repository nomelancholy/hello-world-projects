package inherit;

public class DuckExam {

	public static void main(String[] args) {
		Duck duck = new Duck();
		duck.sing();
		duck.fly();
		
		//Bird b = new Bird();
		// 에러 발생 - 추상 클래스는 인스턴스화 하지못한다
	}
	
}
