#include  <iostream>
#include  <vector>
using  namespace  std;

int  main()
{
	vector<int> intVec(5);
	for (int i = 0; i < intVec.size(); i++)
		intVec[i] = i + 1;

	vector<int>::iterator it = intVec.begin();
	cout << "저장된 데이터 : ";
	for (; it < intVec.end() ; it++)
		cout << *it << " ";
	cout << endl;

	it = intVec.begin();
	cout << "3번째 데이터 : ";
	cout << *(it + 2) << endl;

	return 0;
}