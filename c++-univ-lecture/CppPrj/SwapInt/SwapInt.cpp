#include <iostream>
using namespace std;
void SwapValues(int& x, int& y);

int main()
{
    int a, b;
    cout << "두 수를 입력하시오" << endl;
    cin >> a >> b;
    if (a < b) {
        SwapValues(a, b);
    }

    cout << "큰 수 = " << a << " 작은 수 = " << b << endl;

    return 0;
}

void SwapValues(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}