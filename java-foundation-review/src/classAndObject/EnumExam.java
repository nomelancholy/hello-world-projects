package classAndObject;

public class EnumExam {

	// 
	public static final String MALE = "MALE";
	public static final String FEMALE = "FEMALE";
	
	public static void main(String[] args) {
		
		String gender1;
		
		gender1 = EnumExam.MALE;
		gender1 = EnumExam.FEMALE;
		// 남녀만 넣고 싶은데 String 타입인 gender1에는
		
		gender1 = "boy";
		// 이외의 값도 들어간다.
		
		Gender gender2;
		// 그러나 아래처럼 MALE 과 FEMALE을 정의한 Gender enum을 만들고 Gender 타입으로 변수를 만들면  
		
		gender2 = Gender.MALE;
		gender2 = Gender.FEMALE;
		// 정의한 값만 들어갈 수 있다
		
		// gender2 = "boy";
		// 에러 발생
		
	}
	
enum Gender {
	MALE, FEMALE;
}
	
}
