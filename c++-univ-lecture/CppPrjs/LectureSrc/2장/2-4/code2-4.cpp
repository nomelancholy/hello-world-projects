#include    <iostream>
using namespace std;

int main()
{
    int val, total = 0;
    for (int i = 0; i < 10; i++) {
        cout << "������ " << i + 1 << " : ";
        cin >> val;
        total += val;
    }
    cout << "--> �հ� : " << total << endl;
    return 0;
}