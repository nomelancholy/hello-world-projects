#include    <iostream>
using namespace std;

int main()
{
    int     score;
    char    grade;
    cout << "점수 : ";
    cin >> score;
    switch (score / 10) {
    case 10:                  // score가 100인 경우 아래로 계속 진행한다.
    case 9:   grade = 'A';    // score가 90～100인 경우
        break;
    case 8:   grade = 'B';    // score가 80～89인 경우
        break;
    case 7:   grade = 'C';    // score가 70～79인 경우
        break;
    case 6:   grade = 'D';    // score가 60～69인 경우
        break;
    default:  grade = 'F';    // 그 외의 모든 경우
    }
    cout << "  --> 등급 : " << grade << endl;
    return 0;
}