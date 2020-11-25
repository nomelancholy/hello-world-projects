#include  <iostream>
using  namespace  std;

class BaseC {
	int a; 	// private 멤버
protected:
	int b; 	// protected 멤버
public:
	int c; 	// public 멤버
	int geta() const { return a; }  	// OK: 소속 멤버 사용
	void set(int x, int y, int z) { a = x; b = y; c = z; } // OK
};

class Drvd1 : public BaseC {
	// class BaseC의 데이터 멤버 a는 class Drvd1이 액세스할 수 없음
	// class BaseC의 데이터 멤버 b는 class Drvd1의 protected로 취급되고
	// class BaseC의 데이터 멤버 c는 class Drvd1의 public으로 취급됨
	// b와 c는 이 클래스가 액세스할 수 있음
public:
	int sum() const { return a + b + c; } 	// error: a를 사용
	void printbc() const { cout << b << ' ' << c << '\n'; } // OK
};

class Drvd2 : protected BaseC {
	// class BaseC의 데이터 멤버 a는 class Drvd2가 액세스할 수 없음
	// class BaseC의 데이터 멤버 b와 c는 class Drvd2의 protected로 
	// 취급됨
	// b와 c는 class Drvd2가 액세스할 수 있음.
public:
	int sum() const { return a + b + c; }  // error: a를 사용
	void printbc() const { cout << b << ' ' << c << '\n'; } // OK
};

class Drvd3 : private BaseC {
	// class BaseC의 데이터 멤버 a는 class Drvd3가 액세스할 수 없음
	// class BaseC의 데이터 멤버 b와 c는 class Drv3의 private로 취급됨
	// b와 c는 class Drvd3가 액세스할 수 있음
public:
	int sum() const { return a + b + c; }	// error: a를 사용
	void printbc() const { cout << b << ' ' << c << '\n'; } // OK
};

int  main()    	// 외부 함수
{
	Drvd1   d1;
	d1.a = 1;  	// private 멤버를 액세스하므로 error
	d1.b = 2; 		// protected 멤버를 액세스하므로 error
	d1.c = 3;  	// public 멤버를 액세스하므로 OK
	Drvd2   d2;
	d2.a = 1; 		// private 멤버를 액세스하므로 error
	d2.b = 2; 		// protected로 취급되는 멤버를 액세스하므로 error
	d2.c = 3;  	// protected로 취급되는 멤버를 액세스하므로 error
	Drvd3   d3;
	d3.a = 1; 		// private 멤버를 액세스하므로 error
	d3.b = 2; 		// private로 취급되는 멤버를 액세스하므로 error
	d3.c = 3;  	// private로 취급되는 멤버를 액세스하므로 error
	return 0;
}