package chapter12.lambda;

// interface 선언
interface PrintString{
    void showString(String str);
}

// 람다식은 프로그램내에서 변수처럼 사용할 수 있다
public class TestLambda {

    public static void main(String[] args) {
        // 구현부 생성 및 출력
        PrintString lambdaStr = s -> System.out.println(s);
        lambdaStr.showString("Test");

        // 람다 구현부를 파라미터로 넘겨준다
        showMyString(lambdaStr);

        // returnString()을 인스턴를 호출해 함수의 구현부를 test 변수의 담았다
        PrintString test = returnString();
        test.showString("Test 3");
    }

    public static void showMyString(PrintString p){
        p.showString("Test 2");
    }

    // PrintString 타입의 데이터 반환
    public static PrintString returnString(){
        return s -> System.out.println(s + "!!!");
    }

}
