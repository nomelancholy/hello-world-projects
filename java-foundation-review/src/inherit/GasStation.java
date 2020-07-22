package inherit;

import classAndObject.Car;

public class GasStation {
	
	public static void main(String[] args) {
		Car suv = new Suv();
		Car truck = new Truck();
		Car bus = new Bus();
		
		GasStation gs = new GasStation();
		gs.fill(suv);
		gs.fill(truck);
		gs.fill(bus);
		
	}
	
	   public void fill(Car car){
	        //참고. car.getClass().getName()은 car오브젝트가 실제로 어떤 클래스인지를 알려줍니다.
	        System.out.println(car.getClass().getName()+"에 기름을 넣습니다.");

	        car.gas += 10;
	        System.out.println("기름이 "+car.gas+"리터 들어있습니다.");
	    }

}
