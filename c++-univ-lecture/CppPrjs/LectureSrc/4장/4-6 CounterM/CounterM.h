#ifndef COUNTERM_H_INCLUDED
#define COUNTERM_H_INCLUDED

class  CounterM { 	// 클래스 CounterM의 선언 시작
	const int maxValue;	// 계수기의 최댓값
	int  value;     	// private 데이터 멤버
public:               	// public 멤버함수
	CounterM(int mVal) : maxValue{ mVal }, value{ 0 } { }  	// 생성자
	void  reset()     	// 계수기의 값을 0으로 지움.
	{
		value = 0;
	}
	void  count()   	// 계수기의 값을 1 증가시킴.
	{
		value = value < maxValue ? value + 1 : 0;
	}
	int  getValue() const	// 계수기의 현재 값을 반환함
	{
		return value;
	}
};

#endif  // COUNTERM_H_INCLUDED