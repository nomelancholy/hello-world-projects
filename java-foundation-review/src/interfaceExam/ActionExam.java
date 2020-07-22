package interfaceExam;

public class ActionExam {
	public static void main(String[] args) {
		Action action = new MyAction();
		// Action은 추상클래스기 때문에 구현이 되지 않는다
		// 상속받은 자식 객체를 생성해야 한다
		action.exec();
		
		// 그러나 아래와 같이 사용할 수도 있다
		
		Action action2 = new Action() {
			// 추상 클래스의 생성자를 호출하려고 하면
			// 해당 생성자 이름에 해당하는 클래스를 상속받는 이름없는 객체를 만든다
			// 이를 익명클래스라고 한다
			
			@Override
			public void exec() {
				System.out.println("exec");
			}
		};
		action2.exec();
		
		// 이런 익명클래스가 존재하는 이유는
		// Action을 상속받는 클래스를 굳이 만들 필요가 없는 경우 사용한다
	}
}
