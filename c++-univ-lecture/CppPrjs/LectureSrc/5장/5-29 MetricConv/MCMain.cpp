#include  <iostream>
#include  "Meter.h"
#include  "Feet.h"

int  main()
{
	Meter   mLen;
	Feet    fLen(10, 5);
	mLen = fLen; 	// �۽��� Ŭ������ ���ǵ� �� ��ȯ
	fLen.display();
	mLen.display();
	fLen = mLen; 	// ������ Ŭ������ ���ǵ� �� ��ȯ
	fLen.display();
	return 0;
}