#include	<iostream>
using namespace std;
#include	"IntClass.h"

int main()
{
	IntClass1	i1;
	IntClass2	i2;

	cout << (++i1).getValue() << endl;
	cout << i1.getValue() << endl;
	cout << (i2++).getValue() << endl;
	cout << i2.getValue() << endl;
	return 0;
}
