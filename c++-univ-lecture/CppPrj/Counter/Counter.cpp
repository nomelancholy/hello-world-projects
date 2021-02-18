#include <iostream>
#include "Counter.h"
using namespace std;

int main() {
    Counter cnt;
    // cnt.reset(); 생성자가 이 작업을 대신함으로 불필요
    cout << "계수기의 현재 값 : " << cnt.getValue() << endl;
    cnt.count();
    cnt.count();
    cout << "계수기의 현재 값 : " << cnt.getValue() << endl;
    return 0;
}
