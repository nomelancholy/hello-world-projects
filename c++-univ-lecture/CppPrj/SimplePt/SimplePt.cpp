// SimplePt.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr;

    ptr = &a; // 포인터 변수 ptr에 변수 a의 주소를 저장
    cout << "ptr가 가리키는 값: " << *ptr << endl;
    *ptr = 20;
    cout << "변수 a의 값" << a << endl;
    return 0;
}

