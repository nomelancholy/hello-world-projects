package inheritPackage;

import inherit.AccessObj;

public class AccessObjExam extends AccessObj {

	public static void main(String[] args) {
		AccessObjExam obj = new AccessObjExam();
		System.out.println(obj.p);
		
		System.out.println(obj.p2);
		// AccessObjExam 클래스가 AccessObj 를 상속받은 자식 클래스이기 때문에
		// proteced 접근 제한자를 사용한 p2는 다른 패키지여도 사용 가능
		
		//System.out.println(obj.k);
		// default도 접근 불가
		//System.out.println(obj.i);
		// private은 접근 불가
	}
	
}
