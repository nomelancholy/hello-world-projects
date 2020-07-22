package classAndObject;

import packageExam.Package;
// 다른 패키지의 클래스를 사용하기 위해선 import가 필요하다
import packageExam.*;
// 이처럼 *을 활용하면 해당 패키지내의 모든 클래스를 import한 것이다

public class PackageExam {

	public static void main(String[] args) {
		Package p = new Package();
	}
	
}
