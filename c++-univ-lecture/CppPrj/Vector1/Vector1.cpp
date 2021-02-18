#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    vector<int> intVec(5);

    for (int i = 0; i < intVec.size(); i++) {
        intVec[i] = i + 1;
    }

    cout << "백터의 논리적 크기 : " << intVec.size() << endl;
    cout << "백터의 물리적 크기 : " << intVec.capacity() << endl;
    cout << "저장된 데이터 : ";

    for (int i = 0; i < intVec.size(); i++) {
        cout << intVec[i] << " ";
    }

    cout << endl
         << endl
         << "1개의 데이터 push_back" << endl;

    intVec.push_back(11);

    cout << "백터의 논리적 크기 : " << intVec.size() << endl;
    cout << "백터의 물리적 크기 : " << intVec.capacity() << endl;
    cout << "저장된 데이터 : ";

    for (int i = 0; i < intVec.size(); i++) {
        cout << intVec[i] << " ";
    }

    cout << endl
         << endl
         << "5개의 데이터 push_back" << endl;

    for (int i = 0; i < 5; i++) {
        intVec.push_back(i + 11);
    }
    
    cout << "백터의 논리적 크기 : " << intVec.size() << endl;
    cout << "백터의 물리적 크기 : " << intVec.capacity() << endl;
    cout << "저장된 데이터 : ";

    for (int i = 0; i < intVec.size(); i++) {
        cout << intVec[i] << " ";
    }

    cout << endl
         << endl
         << "3개의 데이터 pop_back" << endl;

    for (int i = 0; i < 3; i++) {
        intVec.pop_back();
    }

    cout << "백터의 논리적 크기 : " << intVec.size() << endl;
    cout << "백터의 물리적 크기 : " << intVec.capacity() << endl;
    cout << "저장된 데이터 : ";

    for (int i = 0; i < intVec.size(); i++) {
        cout << intVec[i] << " ";
    }

    cout << endl << endl;

    vector<int>::iterator it = intVec.begin();

    cout << "저장된 데이터 : ";

    for (;  it < intVec.end(); it++) {
        cout << *it << " ";
    }

    cout << endl
        << endl;

    it = intVec.begin();

    cout << "3번째 데이터 : ";
    cout << *(it + 2) << endl << endl;

    cout << "내림차순 정렬 : ";

    sort(intVec.begin(), intVec.end(), greater<>());

    for (auto i : intVec) {
        cout << i << " ";
    }
    cout << endl
         << endl;

    vector<int> iv2(5);

    cout << "두번째 벡터 : ";

    for (auto& i : iv2) {
        i = rand() % 100;
        cout << i << " ";
    }

    cout << endl
         << endl;

    vector<int> iv3(intVec.size() + iv2.size());

    sort(intVec.begin(), intVec.end());
    sort(iv2.begin(), iv2.end());

    merge(intVec.begin(), intVec.end(), iv2.begin(), iv2.end(), iv3.begin());

    cout << "합병 결과 : ";
    for (auto i : iv3) {
        cout << i << " ";
    }

    cout << endl << endl;

    return 0;
}
