#include  <iostream>
#include  <vector>
#include  <cstdlib>
#include  <ctime>
#include  <algorithm>
using  namespace  std;

int  main()
{
	srand((unsigned)time(NULL));   // ���� �߻��� �ʱ�ȭ

	vector<int> iv1(5);
	cout << "����1 : ";
	for (auto &i : iv1) {
		i = rand() % 100;         // 0~99�� ���� �߻�
		cout << i << " ";
	}
	sort(iv1.begin(), iv1.end());   // ���� �˰���
	cout << endl << "���ĵ� ����1 : ";
	for (auto i : iv1)
		cout << i << " ";
	cout << endl << endl;

	vector<int> iv2(5);
	cout << "����2 : ";
	for (auto &i : iv2) {
		i = rand() % 100;         // 0~99�� ���� �߻�
		cout << i << " ";
	}
	sort(iv2.begin(), iv2.end());   // ���� �˰���
	cout << endl << "���ĵ� ����2 : ";
	for (auto i : iv2)
		cout << i << " ";
	cout << endl << endl;

	// �պ� ����� ������ ����
	vector<int> iv3(iv1.size() + iv2.size());
	// iv1�� iv2�� �պ��� ����� iv3�� ����
	merge(iv1.begin(), iv1.end(),
		iv2.begin(), iv2.end(), iv3.begin());
	cout << "����1�� ����2�� �պ��� ��� : ";
	for (auto i : iv3)
		cout << i << " ";
	cout << endl << endl;

	return 0;
}
