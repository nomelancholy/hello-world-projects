#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc != 3) {    // 매개변수가 세 개인지 확인함
		cerr << "Parameter Error!\n";
		cerr << "Usage:\n";
		cerr << "\tfcopy source_filename destination_filename\n";
		return 1;
	}

	cout << "Copying " << argv[1] << " to " << argv[2] << "...";
	ifstream fin(argv[1]); 		// 소스 파일을 엶
	ofstream fout(argv[2]);  	// 목표 파일을 엶
	char ch;
	while (fin.get(ch)) 		// 소스 파일에서 문자를 한 자씩 읽어
		fout << ch; 			// 목표 파일에 기록함
	fout.close(); 				// 소스 파일을 닫음
	fin.close(); 				// 목표 파일을 닫음

	cout << "Finished.\n";
	return 0;
}