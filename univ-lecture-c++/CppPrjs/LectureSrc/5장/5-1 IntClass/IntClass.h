#pragma once
class  IntClass1 {
	int  a;
public:
	IntClass1(int n = 0) : a(n) {} 	// 생성자
	IntClass1  operator ++ () { 	// 전위 표기 ++ 연산자 다중정의
		++a;
		return *this;
	}
	int  getValue() const { return a; }
};

class  IntClass2 {
	int  a;
public:
	IntClass2(int n = 0) : a(n) {} 	// 생성자
	IntClass2  operator ++ (int) { // 후위 표기 ++ 연산자 다중정의
		IntClass2 tmp(*this);
		++a;
		return tmp;
	}
	int  getValue() const { return a; }
};
