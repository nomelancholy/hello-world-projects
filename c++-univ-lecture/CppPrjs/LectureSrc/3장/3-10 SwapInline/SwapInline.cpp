#include <iostream>
using namespace std;

// �� ������ ���� �ٲٴ� �Լ�
// �μ�     int  &x,  int  &y : ���� �ٲ� ����
// ��ȯ     ����.
inline void SwapValues(int  &x, int  &y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int  a, b;

	cout << "�� ���� �Է��Ͻÿ� : ";
	cin >> a >> b;
	if (a < b) SwapValues(a, b);    // ������ �ٲ� a�� ū ���� ����.
	cout << "ū �� = " << a << " ���� �� = " << b << endl;
	return 0;
}