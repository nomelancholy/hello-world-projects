#include	<iostream>
using namespace std;
#include	"VecF.h"

int main()
{
	float	a[3] = { 1, 2, 3 };
	float	b[3] = { 2, 4, 6 };
	VecF	v1(3, a);
	VecF	v2(3, b);
	VecF	v3(3);
	v3 = v1;
	cout << v3 << endl;
	v3 = v1.add(v2);
	cout << v1 << " + " << v2 << " = ";
	cout << v3 << endl;
	return 0;
}
/* */