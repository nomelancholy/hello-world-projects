#include  <iostream>
#include  <cstring>
using  namespace  std;

int  main()
{
	char str1[40] = "C style string";	// char 배열 초기화
	char str2[] = "Object-Oriented "; // 배열 크기=문자열 길이
	const char *str3 = "Programming";		// char 포인터

	cout << str1 << endl; 			// 문자열 출력
	cout << str3 << "의 문자열 길이는 ";
	cout << strlen(str3) << endl; 	// strlen() : 문자열 길이
	strcpy(str1, str2);				// strcpy() : 문자열 복사
	cout << str1 << endl;
	strcat(str1, str3);				// strcat() : 문자열 연결
	cout << str1 << endl;
	return 0;
}