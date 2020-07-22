package classAndObject;

public class ReferenceTypeExam {
	
    public static void main(String []args) {
        ReferenceTypeExam exam = new ReferenceTypeExam();
        
        //기본형 변수value1을 addOne에 전달합니다.
        int value = 10;
        exam.addOne(value);
        System.out.println("기본형 변수의 값을 다른 메소드에서 변경한 결과: " + value);
        // 10 출력
        
        // 기본형 타입은 다른 메소드에 매개변수로 전달될때, 10이라는 값이 그대로 전달된다.
        // 따라서 addOne에서 1을 더하더라도 value라는 변수에는 아무 영향이 없습니다.
        
        //참조형 변수arr을 addOne에 전달합니다.
        int []arr = {10};
        exam.addOne(arr);
        System.out.println("참조형 변수의 값을 다른 메소드에서 변경한 결과: " + arr[0]);
        // 11 출력
        
        // 참조형 타입은 다른 메소드에 매개변수로 전달될때, 변수의 주소가 전달된다. 
        // 예를들어 '몇번째 박스에 값이 있다'는 식으로 값이 들어있는 주소가 전달되는 것. 
        // 그럼 그걸 전달받은 메소드addOne에서는 그 박스에 가서 들어있는 값에 1 더합니다. 
        // addOne을 실행하고 나서 arr[0]을 확인해 볼 때도 같은 박스에 가서 값을 확인하기 때문에 값이 11로 변해있는겁니다.
    }
    
    
    public void addOne(int value) {
        value++;
    }
    
    public void addOne(int[] arr) {
        for(int i = 0; i < arr.length; i++){
            arr[i] ++;
        }
    }

}
