package inherit;

public abstract class Bird {
	// 추상 메소드를 하나라도 가지고 있으면 추상 클래스로 선언해야 한다 
	
	public abstract void sing();
	// 새가 어떻게 우는지는 새마다 다르다
	// 이런 경우 억지로 구현하기 보다 abstract를 붙여서 추상 메소드로 선언한다
	
	public void fly() {
		System.out.println("날다");
	}
	// 추상 메소드가 하나만 있어도 추상
	
}
