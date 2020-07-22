package interfaceExam;

public class LedTvExam {

	public static void main(String[] args) {
		
		Tv tv = new LedTv();
		// 참조 변수의 타입으로 인터페이스를 사용할 수 있다.
		// 이렇게 한다면 예를 들어 Tv 인터페이스를 구현한 LcdTv라는 다른 클래스를 만들었을 때
		// Tv tv = new LedTv(); 를 Tv tv = new LcdTv();
		// 라고만 바꿔주면 다른 부분의 변경없이 똑같이 프로그램이 동작 가능하다

		// 즉 동일한 인터페이스를 구현한다는 것은 클래스 사용법이 같다는 것을 의미한다.
		// 그리고 클래스는 이러한 인터페이스를 여러개 구현할 수 있다.
		
		tv.turnOn();
		tv.turnOff();
		tv.changeChannel(8);
		tv.changeVolume(39);
	}
	
}
