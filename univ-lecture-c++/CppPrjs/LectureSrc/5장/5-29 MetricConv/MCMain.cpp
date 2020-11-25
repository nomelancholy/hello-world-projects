#include  <iostream>
#include  "Meter.h"
#include  "Feet.h"

int  main()
{
	Meter   mLen;
	Feet    fLen(10, 5);
	mLen = fLen; 	// 송신측 클래스에 정의된 형 변환
	fLen.display();
	mLen.display();
	fLen = mLen; 	// 수신측 클래스에 정의된 형 변환
	fLen.display();
	return 0;
}