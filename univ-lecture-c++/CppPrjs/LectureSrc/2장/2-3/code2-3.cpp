#include    <iostream>
using namespace std;

int main()
{
    int     score;
    char    grade;
    cout << "���� : ";
    cin >> score;
    switch (score / 10) {
    case 10:                  // score�� 100�� ��� �Ʒ��� ��� �����Ѵ�.
    case 9:   grade = 'A';    // score�� 90��100�� ���
        break;
    case 8:   grade = 'B';    // score�� 80��89�� ���
        break;
    case 7:   grade = 'C';    // score�� 70��79�� ���
        break;
    case 6:   grade = 'D';    // score�� 60��69�� ���
        break;
    default:  grade = 'F';    // �� ���� ��� ���
    }
    cout << "  --> ��� : " << grade << endl;
    return 0;
}