#include  <iostream>
#include  "MyString.h"
using  namespace  std;

int  main()
{
	MyString  str1("MyString class");
	MyString  str2("Object Oriented ");
	MyString  str3;

	cout << str1 << endl;   // ���ڿ� ���
	str3 = "Programming";   // ���ڿ� ���� : ������ �� ��ȯ �� �̵� ����
	cout << str3 << "�� ���ڿ� ���̴� ";
	cout << str3.length() << endl;  // ���ڿ� ���̸� ���ϴ� �޼ҵ�
	str1 = str2;            // ���� �����ڷ� ���ڿ� ����
	cout << str1 << endl;
	str1 = str2 + str3;     // ���ڿ� ���� ������
	cout << str1 << endl;
	MyString  str4(str3);   // ���� ������ �̿�
	cout << str4 << endl;
	str2 += "Programming";  // += ������ �̿�
	cout << str2 << endl;
	str2[6] = '-';          // [] ������ �̿�
	cout << str2 << endl;
	return 0;
}