#include	<iostream>
#include	"Counter.h"
using namespace std;

int  main()
{
	Counter  cnt; 	// Counter ��ü�� ����
	cout << "������� ���� ��: " << cnt.getValue() << endl;
	cnt.count();    	// ����⸦ 1 ������Ŵ
	cnt.count();
	cout << "������� ���� ��: " << cnt.getValue() << endl;
	return 0;
}
