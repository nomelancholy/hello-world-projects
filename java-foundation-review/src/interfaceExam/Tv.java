package interfaceExam;

public interface Tv {

	public int MIN_VOLUME = 0;
	public int MAX_VOLUME = 100;

	// 인터페이스에서 변수를 선언하면
	// final을 붙이지 않아도 상수로 선언된다
	// 이는 컴파일시 자동으로 아래와 같이 바뀐다
	
    //public static final int MIN_VOLUME = 0;
    //public static final int MAX_VOLUME = 100;

    
	public void turnOn();

	public void turnOff();

	public void changeVolume(int volume);

	public void changeChannel(int channel);
	
	// 인터페이스에서 정의된 메소드는 추상 메서드와 비슷하지만 abstract를 붙여주지 않아도 된다
	// 이 역시 컴파일시 자동으로 아래와 같이 변경된다
	
//    public abstract void turnOn();
//    public abstract void turnOff();
//    public abstract void changeVolume(int volume);
//    public abstract void changeChannel(int channel);	

}
