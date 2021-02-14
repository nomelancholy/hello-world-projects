#include <iostream>
using namespace std;

int main()
{
    char str[14] = "Hello, world!";
    char 	*pt;

    cout << str << endl;
    pt = str;         		// pt가 배열 str를 가리킴.
    while (*pt) { 			// 문자열의 끝이 아니면 반복
        if (*pt >= 'a' && *pt <= 'z')	// 소문자인 경우
            *pt = *pt - 'a' + 'A';    	// 대문자로 바꿈.
        pt++;     			// 다음 문자로 포인터 이동
    }
    cout << str << endl;
    return 0;
}