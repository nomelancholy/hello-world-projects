#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc != 3) {    // �Ű������� �� ������ Ȯ����
		cerr << "Parameter Error!\n";
		cerr << "Usage:\n";
		cerr << "\tfcopy source_filename destination_filename\n";
		return 1;
	}

	cout << "Copying " << argv[1] << " to " << argv[2] << "...";
	ifstream fin(argv[1]); 		// �ҽ� ������ ��
	ofstream fout(argv[2]);  	// ��ǥ ������ ��
	char ch;
	while (fin.get(ch)) 		// �ҽ� ���Ͽ��� ���ڸ� �� �ھ� �о�
		fout << ch; 			// ��ǥ ���Ͽ� �����
	fout.close(); 				// �ҽ� ������ ����
	fin.close(); 				// ��ǥ ������ ����

	cout << "Finished.\n";
	return 0;
}