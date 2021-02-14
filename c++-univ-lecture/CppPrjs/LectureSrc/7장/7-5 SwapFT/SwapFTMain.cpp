#include <iostream>
#include "SwapFT.h"
#include "MyString.h"
using namespace std;

int main()
{
	int x = 10, y = 20;
	cout << "x = " << x << ", y = " << y << endl;
	swapFT(x, y);
	cout << "값 교환 후-- > ";
	cout << "x = " << x << ", y = " << y << endl << endl;

	MyString  s1("KNOU"), s2("CS");
	cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
	swapFT(s1, s2);
	cout << "값 교환 후-- > ";
	cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
	return 0;
}