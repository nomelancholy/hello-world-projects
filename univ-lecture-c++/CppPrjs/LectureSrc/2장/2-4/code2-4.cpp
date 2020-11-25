#include    <iostream>
using namespace std;

int main()
{
    int val, total = 0;
    for (int i = 0; i < 10; i++) {
        cout << "데이터 " << i + 1 << " : ";
        cin >> val;
        total += val;
    }
    cout << "--> 합계 : " << total << endl;
    return 0;
}