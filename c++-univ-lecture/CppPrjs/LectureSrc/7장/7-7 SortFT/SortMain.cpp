#include  <iostream>
#include  "SortFT.h"
#include  "MyString.h"
using  namespace  std;

int main()
{
	int x[10] = { 6, 0, 3, 1, 2, 9, 4, 5, 7, 8 };
	sortFT(x, 10);
	for (auto i : x)
		cout << i << " ";
	cout << endl;

	MyString	s[5] = { "def", "abc", "jkl", "ghi", "mno" };
	sortFT(s, 5);
	for (auto str : s)
		cout << str << " ";
	cout << endl;
	return 0;
}