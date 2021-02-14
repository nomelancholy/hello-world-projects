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
	// 이진 파일을 엶
	ofstream textout("numbers", ios::binary);
	// 이진 파일에 데이터를 기록함
	textout.write((char*)&c1, sizeof(COMPLEX));
	textout.close();

	COMPLEX c2;
	// 이진 파일을 엶
	ifstream textin("numbers", ios::binary);
	// 이진 파일에서 데이터를 읽음
	textin.read((char*)&c2, sizeof(COMPLEX));
	textin.close();

	if ((c1.real == c2.real) && (c1.imag == c2.imag))
		cout << "두 수가 같음" << endl;
	else
		cout << "두 수가 서로 다름" << endl;

	return 0;
}