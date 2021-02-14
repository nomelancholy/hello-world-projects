#include <iostream>
using namespace std;

double hmean(double a, double b)
{
	if (a == -b) // ���� ����
		throw "��ȭ����� ����� �� ����!";
	return 2.0*a*b / (a + b);
}

int main(int argc, char *argv[])
{
	double x, y, z;
	cout << "�� ���� �Է��Ͻÿ� : ";
	while (cin >> x >> y) {
		try { // ���ܰ� �߻��� ���ɼ��� �ִ� �ڵ�
			z = hmean(x, y);
		}
		catch (const char* s) { // ����ó��
			cout << s << endl;
			cout << "�ٸ� ���� �Է��Ͻÿ� : ";
			continue;
		}
		cout << "��ȭ��� = " << z << endl;
		cout << "���� �� ���� �Է��Ͻÿ� (Q�� ����) : ";
	}
	return 0;
}