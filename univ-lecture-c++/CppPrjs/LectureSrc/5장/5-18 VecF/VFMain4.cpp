#include	<iostream>
using namespace std;
#include	"VecF.h"

void swapVec(VecF &v1, VecF &v2) {
	VecF	tmp = move(v1);	// 이동 생성자
	v1 = move(v2); 			// 이동 대입 연산자
	v2 = move(tmp); 		// 이동 대입 연산자
}

int main()
{
	float	a[3] = { 1, 2, 3 };
	float	b[3] = { 2, 4, 6 };
	VecF	v1(3, a);
	VecF	v2(3, b);
	cout << "v1 = " << v1 << ",  ";
	cout << "v2 = " << v2 << endl;
	swapVec(v1, v2);
	cout << "--> v1 = " << v1 << ",  ";
	cout << "v2 = " << v2 << endl;
	return 0;
}
