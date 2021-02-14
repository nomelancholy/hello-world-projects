#include  <iostream>
#include  <fstream>
using namespace std;

int main()
{
	char filename[20];

	cout << "새로운 파일 이름을 입력하시오 : ";
	cin >> filename;
	cin.ignore(1, '\n');    // 입력 스트림을 비움
	// 새로운 ofstream 객체를 생성하여 파일을 오픈함
	ofstream fout(filename);
	char ch;
	while (cin.get(ch)) { 	// cin.get(ch)가 false일 때까지
		fout << ch;      		// 입력된 문자를 파일에 기록함
	}
	fout.close();

	cout << "\n----------------- 파일의 내용 -----------------\n";

	// 새로운 ifstream 객체를 생성하여 파일을 오픈함
	ifstream fin(filename);
	while (fin.get(ch)) 		// 파일에서 한 자씩 문자를 읽어
		cout << ch; 			// 화면에 출력함
	fin.close();
	return 0;
}