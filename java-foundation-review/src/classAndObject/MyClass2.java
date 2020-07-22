package classAndObject;

public class MyClass2 {
	// 매개변수의 수나 타입이 다른 경우 ( 리턴 타입은 상관 없음 ) 
	// 같은 이름으로 여러개의 메소드를 만들 수 있다
	// 이를 '메소드 오버로딩' 이라고 한다
	
	public int plus(int x, int y) {
		return x + y;
	}
	
	public int plus(int x, int y, int z) {
		return x + y+z;
	}
	
	public String plus(String x, String y) {
		return x.concat(y);
	}

}
