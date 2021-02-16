// Circles2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141592;

struct C2dType {
    double x, y;
};

class CircleClass {
    C2dType center;
    double radius;

public:
    void init(double cx, double cy, double r) {
        center.x = cx;
        center.y = cy;
        radius = r;
    }

    double area() const {
        return radius * radius * PI;
    }

    bool checkOverlap(const CircleClass& c) const {
        double dx = center.x - c.center.x;
        double dy = center.y - c.center.y;
        double dCntr = sqrt(dx * dx + dy * dy);
        return dCntr < radius + c.radius;
    }

    void dispCircle()
    {
        cout << " 중심 : (" << center.x << "," << center.y << ")";
        cout << " 반경 : " << radius << endl;
    }
};

int main() {
    CircleClass c1, c2;
    c1.init(0, 0, 10);
    c2.init(30, 10, 5);

    cout << "원1" << endl;
    c1.dispCircle();
    cout << " 원 1의 면적 : " << c1.area() << endl;
    cout << "원2" << endl;
    c2.dispCircle();
    cout << " 원 2의 면적 : " << c2.area() << endl;

    if (c1.checkOverlap(c2)) {
        cout << "중첩" << endl;
    } else {
        cout << "중첩되지 않음" << endl;
    }
    std::cout << "Hello World!\n";
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
