#include  <iostream>
#include  <fstream>
using namespace std;

int main()
{
	char filename[20];

	cout << "���ο� ���� �̸��� �Է��Ͻÿ� : ";
	cin >> filename;
	cin.ignore(1, '\n');    // �Է� ��Ʈ���� ���
	// ���ο� ofstream ��ü�� �����Ͽ� ������ ������
	ofstream fout(filename);
	char ch;
	while (cin.get(ch)) { 	// cin.get(ch)�� false�� ������
		fout << ch;      		// �Էµ� ���ڸ� ���Ͽ� �����
	}
	fout.close();

	cout << "\n----------------- ������ ���� -----------------\n";

	// ���ο� ifstream ��ü�� �����Ͽ� ������ ������
	ifstream fin(filename);
	while (fin.get(ch)) 		// ���Ͽ��� �� �ھ� ���ڸ� �о�
		cout << ch; 			// ȭ�鿡 �����
	fin.close();
	return 0;
}