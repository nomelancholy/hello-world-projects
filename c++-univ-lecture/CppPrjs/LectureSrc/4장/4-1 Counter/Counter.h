#ifndef  COUNTER_H_INCLUDED 	// Counter.h가 중복 include되지 않았는지 검사
#define  COUNTER_H_INCLUDED 	// Counter.h가 처음 include될 때 정의됨

class  Counter { 			// 클래스 Counter의 선언 시작
	int  value; 			// private 데이터 멤버
public: 					// public 멤버함수
	void  reset() 		// 계수기의 값을 0으로 지움.
		{ value = 0; }
	void  count() 		// 계수기의 값을 1 증가시킴.
		{ ++value; }
	int  getValue() const 	// 계수기의 현재 값을 반환함.
		{ return value; }
};

#endif  // COUNTER_H_INCLUDED