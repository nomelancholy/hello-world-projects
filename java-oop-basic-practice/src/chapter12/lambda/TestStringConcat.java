package chapter12.lambda;

public class TestStringConcat {

    public static void main(String[] args) {
        // 기존 방식
        StringConcatImpl impl = new StringConcatImpl();
        impl.makeString("hello","world");

        // 람다 활용 방식

        StringConcat concat = (s, v)-> System.out.println(s+","+v);
        concat.makeString("hello","world");

        // 위와 같이 표현하면 사실 내부적으로는 아래와 같이
        // 익명 내부 클래스가 생성되서 처리되는 것이다.
        StringConcat concat2 = new StringConcat() {
            @Override
            public void makeString(String s1, String s2) {
                System.out.println(s1+","+s2);
            }
        };

        concat2.makeString("hello","world");

    }

}
