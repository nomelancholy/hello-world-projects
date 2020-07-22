package variable;

public class PrimitiveDataTypeExam {

	public static void main(String[] args) {
		
		boolean isFun = true;
		// 논리형 데이터 타입 변수엔 논리 리터럴을 넣어주면 된다.
		// 논리 리터럴 : true / false
		
		
		// 정수형 데이터타입 변수 역시 정수 리터럴을 넣어주면 된다.
		int x = 59;
		// 주로 int를 사용하고 
		
		long bing = 343453434L;
		// 큰 정수를 쓸 때는 long을 사용하는데 
		// long 형 변수에 리터럴을 대입할 때는 뒤에 L을 붙여줘야 한다. 
		// 대소문자는 상관없지만 소문자 l은 다른 숫자와 구분이 쉽지 않아 대문자 L이 권장된다
		
		float f = 32.4F;
		// float은 뒤에 f를 붙여줘야 한다. 역시 대소문자는 상관없다
		
		double d = 34324324234.5;
		
		// 여기서 f , 59 , 343453434L 등등은 리터럴이라고 한다.
		// 컴퓨터 과학 분야에서 리터럴이란, 소스 코드의 고정된 값을 대표하는 용어다.
		
		
		// 문자 데이터 타입 변수엔 
		// ' '을 활용하여 문자 리터럴을 넣어주면 되는데
		// 표현범위가 0~65535 로 숫자인 점에 주목하자
		
		// 자바는 모든 문자를 유니코드로 처리한다.
		// 이 유니코드 값이 음수없이 0부터 65535까지이기 때문에 저런 표현 범위를 갖는것이다.
		
		// 유니코드는 세계 각국의 문자들을 코드값으로 매핑한 국제 표준 규약인데
		// 0 ~ 127까지는 아스키 문자 ( 특수기호 및 영어 알파벳 ) 가 할당되어 있고
		// 44032 ~ 55203까지는 한글 11172자가 할당되어 있다.
		
		// 이 점을 기억하고 코드를 보자
		
		char c = 'f';
		// 문자 데이터 타입 변수 c에 'f' 리터럴을 입력한 후 
		
		System.out.println(c);
		// c를 출력하면 입력한 f가 나오지만
		
		// 내부적으로는 f에 해당하는 유니코드 값을 저장한다.

		// 이런 유니코드 값은 
		int uniCode = c;
		// 위와 같이 char 타입 변수를 정수형 변수에 대입해보면 확인할 수 있다. 
		
		System.out.println(uniCode);
		// 102가 출력된다.
		
		// 이 점을 활용해 char 타입 변수에 아예 아스키 코드를 넣을 수도 있다.
		
		char cCode = 102;
		// 문자 자료형 데이터 타입에 숫자 102를 넣어보면
		
		System.out.println(cCode);
		// f가 출력된다.
		
		//int cTemp = '';
		// '' 은 에러가 발생한다.
		int cTemp = ' ';
		
	}
	
}
