package inherit;

public class AccessObj {
	public int p = 3;
	// 모든 접근을 허용
	protected int p2 = 4;
	// 같은 패키지인 경우 접근 허용
	// 다른 패키지라도 상속을 받은 경우 허용
	int k = 2;
	// default = 자기 자신과 같은 패키지 내에서만 접근
	private int i = 1;
	// private 자기 자신만 접근 가능
}
