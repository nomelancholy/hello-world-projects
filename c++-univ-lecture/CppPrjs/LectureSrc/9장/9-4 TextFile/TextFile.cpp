#include <iostream>
#include <fstream>
using namespace std;

struct COMPLEX {
	double  real;
	double  imag;
};

int main(int argc, char* argv[])
{
	COMPLEX  c1;
	c1.real = 1.123456789;
	c1.imag = -1.123456789;

	ofstream textout("numbers");
	textout << c1.real << " " << c1.imag << "\n";
	textout.close();

	COMPLEX c2;
	ifstream textin("numbers");
	textin >> c2.real >> c2.imag;
	textin.close();

	if ((c1.real == c2.real) && (c1.imag == c2.imag))
		cout << "�� ���� ����" << endl;
	else
		cout << "�� ���� ���� �ٸ�" << endl;

	return 0;
}