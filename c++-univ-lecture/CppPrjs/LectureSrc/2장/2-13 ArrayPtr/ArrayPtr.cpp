#include <iostream>
using namespace std;

int main()
{
    char str[14] = "Hello, world!";
    char 	*pt;

    cout << str << endl;
    pt = str;         		// pt�� �迭 str�� ����Ŵ.
    while (*pt) { 			// ���ڿ��� ���� �ƴϸ� �ݺ�
        if (*pt >= 'a' && *pt <= 'z')	// �ҹ����� ���
            *pt = *pt - 'a' + 'A';    	// �빮�ڷ� �ٲ�.
        pt++;     			// ���� ���ڷ� ������ �̵�
    }
    cout << str << endl;
    return 0;
}