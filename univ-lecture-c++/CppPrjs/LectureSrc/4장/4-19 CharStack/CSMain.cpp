#include  <iostream>
#include "CharStack.h"
using namespace std;

int  main()
{
	CharStack  chStack; 	// 20���� ���ڸ� ������ �� �ִ� ����
	char       str[20];
	
	cout << "���� �ܾ �Է��Ͻÿ� : ";
	cin >> str;

	char*  pt = str;   	// �����ͷ� ���ڿ� ���� ��ġ�� ����Ŵ.
	while (*pt)        	// ���ڿ��� ���� �ƴϸ� �ݺ�
		chStack.push(*(pt++));  	// ���ÿ� ���ڸ� ����.

	cout << "���� �ܾ� ��� : ";
	while (!chStack.chkEmpty()) 	// ������ ��� ���� ������ �ݺ�
		cout << chStack.pop();	// ���ÿ��� ������ ���ڸ� ���
	cout << endl;
	return 0;
}
