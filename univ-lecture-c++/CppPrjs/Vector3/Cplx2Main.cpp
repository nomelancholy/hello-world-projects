#include  <iostream>
#include "Complex2.h";
using namespace std;

int  main()
{
	Complex2  a(10, 20);
	Complex2  b(5, -3);
	cout << a << " + " << b << " = " << a + b << endl;
	Complex2	c;
	c = a + b;
	cout << c << endl;
	return 0;
}
