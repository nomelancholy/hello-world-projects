#include  <iostream>
#include  "IntArray2.h"
using  namespace  std;

int main()
{
	gArray arr(2000, 10);
	try {
		for (int i = 2000; i <= 2010; i++)
			arr[i] = i;
		cout << arr << endl;
	}
	catch (const gArray::LowIndex &e) {
		cerr << e.what() << " --> " << e.wrongIndex << endl;
		cerr << "ÀÎµ¦½º ÇÏÇÑ : " << e.lowBound << endl;
	}
	catch (const gArray::HighIndex &e) {
	//catch (Array::BadIndex e) {
		cerr << e.what() << " --> " << e.wrongIndex << endl;
		cerr << "ÀÎµ¦½º »óÇÑ : " << e.highBound << endl;
	}
	return 0;
}