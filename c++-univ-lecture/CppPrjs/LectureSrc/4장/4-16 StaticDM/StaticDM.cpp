#include  <iostream>
#include "NamedObj.h"
using  namespace  std;

void	f()
{
	NamedObj x("Third"); // 세 번째 객체의 생성
	x.display(); 			// 함수 반환 후 x는 소멸됨
}

int  main()
{
	cout << "NamedObj 클래스의 객체 수 : "
		 << NamedObj::nObj() << endl;
	NamedObj a("First"); 	  	// 첫 번째 객체 생성
	NamedObj b("Second");		// 두 번째 객체 생성
	a.display();
	b.display();
	f();
	NamedObj c("Fourth");		// 네 번째 객체 생성
	c.display();
	cout << "NamedObj 클래스의 객체 수 : "
	 	 << NamedObj::nObj() << endl;
	return 0;
}
