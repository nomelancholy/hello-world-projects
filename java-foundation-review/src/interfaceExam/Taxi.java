package interfaceExam;

public class Taxi implements Meter {
	
	public int baseFare = 2500; // 기본요금(인터페이스에 정의한 변수는 상수라서 변경할 수 없습니다.)

	@Override
	public void start() {
		// TODO Auto-generated method stub
		System.out.println("운행을 시작합니다.");
	}

	@Override
	public int stop(int distance) {
		// TODO Auto-generated method stub
        int fare = baseFare + distance * 2;
        System.out.println("운행을 종료합니다. 요금은 " + fare + "원 입니다.");
        return fare;
	}

}
