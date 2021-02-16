// CirclArea.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
    const double PI{ 3.14159 };
    double radius;

    cout << "원의 반경을 입력하시오 : ";
    cin >> radius;

    double area = radius * radius * PI;
    cout << "원의 면적 = " << area << endl;
    return 0;
}
