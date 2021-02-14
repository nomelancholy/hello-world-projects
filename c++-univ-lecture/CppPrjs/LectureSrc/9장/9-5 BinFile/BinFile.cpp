#include <iostream>
#include <fstream>
using namespace std;

struct COMPLEX {
	double  real;
	double  imag;
};

int main()
{
	COMPLEX   c1;
	c1.real = 1.123456789;
	c1.imag = -1.123456789;
	// ���� ������ ��
	ofstream textout("numbers", ios::binary);
	// ���� ���Ͽ� �����͸� �����
	textout.write((char*)&c1, sizeof(COMPLEX));
	textout.close();

	COMPLEX c2;
	// ���� ������ ��
	ifstream textin("numbers", ios::binary);
	// ���� ���Ͽ��� �����͸� ����
	textin.read((char*)&c2, sizeof(COMPLEX));
	textin.close();

	if ((c1.real == c2.real) && (c1.imag == c2.imag))
		cout << "�� ���� ����" << endl;
	else
		cout << "�� ���� ���� �ٸ�" << endl;

	return 0;
}