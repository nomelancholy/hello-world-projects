package classAndObject;

public class StringExam {

	public static void main(String[] args) {
		
		// String은 new 연산자를 이용하지 않고도 인스턴스를 만들 수 있다.
		
		String str1 = "hello";
		// new 연산자를 이용하지 않고 인스턴스를 만드는 경우
		// 그 인스턴스가 이전에 생성된 적이 없다면 문자열이 상수 영역에 저장된다.
		
		String str2 = "hello";
		// 이미 같은 내용의 문자열이 생성된 적이 있다면 str1이 참조하고 있는 hello 인스턴스를 str2도 참조한다
		
		// new 연산자를 이용해서 인스턴스를 만드는 경우엔
		// 인스턴스가 무조건 새롭게 만들어진다. 즉
		String str3 = new String("hello");
		String str4 = new String("hello");
		
		// str3과 str4는 다른 인스턴스를 참조하고 있다
		
		// 기본형 데이터 타입은 == 로 값을 비교했지만
		// 참조 타입에서 == 은 참조하고 있는 인스턴스 주소를 비교한다. 따라서
		System.out.println(str1 == str2);
		// true 출력
		System.out.println(str3 == str4);
		// false 출력
		
		// 만약 값을 비교하고 싶으면 equals 메소드를 사용해야 한다.
		
		System.out.println(str3.equals(str4));
		// true 출력
		
		// 또한 String은 불변 클래스다. 불변이란 String 인스턴스가 될 때 가지고 있던 값을 나중에 수정할 수 없다.
		// 예를 들어
		
		String str5 = "hello";
		System.out.println(str5.substring(3));
		// str5 를 substring 메소드를 활용해 lo 로 잘라도
		System.out.println(str5);
		// str5가 원래 가지고 있던 값은 변하지 않는다
		
		String str6 = str5.substring(3);
		// 이렇게하면 str6는 str5가 가지고 있는 문자열 중 3번째 위치부터 자른 결과 즉 새로운 String을 참조하게 된다
		
	}
	
}
