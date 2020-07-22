package classAndObject;

public class StringMethodExam {

	public static void main(String[] args) {
		
		String str = "hello";
		// hello 객체 생성 후 str 변수로 그 객체를 참조하게 한다
		
		System.out.println(str.length());
		// 길이 구함
		
		System.out.println(str.concat(" world"));
		// hello 뒤에 ' world' 가 추가된 string 객체 생성
		System.out.println(str);
		// 그러나 String 변수 str이 참조하고 있는 것은 
		// hello world가 아닌 hello 이기 때문에 hello 출력
		
		str = str.concat(" world");
		// 이렇게 str 변수가 참고하는 객체 주소를 바꿔주면
		
		System.out.println(str);
		// hello world 출력
		
		System.out.println(str.substring(3));
		System.out.println(str.substring(3, 7));
		// 인덱스로 자름
		
	}

}
