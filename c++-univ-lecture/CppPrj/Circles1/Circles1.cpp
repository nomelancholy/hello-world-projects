// Circles1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141592;

struct C2dType {
    double x, y;
};

struct CircleType {
    C2dType center;
    double radius;   
};

double circleArea(CircleType c) {
    return c.radius * c.radius * PI;
}

bool checkOverlap(CircleType c1, CircleType c2) {
    double dx = c1.center.x - c2.center.x;
    double dy = c1.center.y - c2.center.y;
    double dCntr = sqrt(dx * dx + dy * dy);
    return dCntr < c1.radius + c1.radius;
}

void dispCircle(CircleType c) {
    cout << " 중심 : (" << c.center.x << "," << c.center.y << ")";
    cout << " 반경 : " << c.radius << endl;
}

int main() {
    CircleType c1 = { { 0, 0 }, 10 };
    CircleType c2 = { { 30, 10 }, 5 };

    cout << "원1" << endl;
    dispCircle(c1);
    cout << " 원 1의 면적 : " << circleArea(c1) << endl;
    cout << "원2" << endl;
    dispCircle(c2);
    cout << " 원 2의 면적 : " << circleArea(c2) << endl;

    if (checkOverlap(c1, c2)) {
        cout << "중첩" << endl;
    } else {
        cout << "중첩되지 않음" << endl;
    }

    return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
