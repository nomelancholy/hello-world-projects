#include <iostream>
using namespace std;

int main() {
    char str[14] = "Hello, world";
    char *pt;

    cout << str << endl;
     
    pt = str; // c++ 에서는 배열의 이름이 주소로 해석된다. 즉 이는 &str[0]과 같다.

    cout << sizeof(str) << endl;

    while (*pt) { // c와 c++의 배열 마지막엔 끝을 나타내는 null문자가 존재한다. 따라서 이렇게 코딩하면 배열의 길이만큼만 반복된다.
        if (*pt >= 'a' && *pt <= 'z') {
            *pt = *pt - 'a' + 'A';
        }
        pt++;
    }
    cout << str << endl;
    return 0;
}

