//
// Created by starm on 2020-11-24.
//

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "Complex2.h"
using namespace std;

double calc(Complex2 c) {
    // rPart의 제곱과 iPart 제곱의 합 구하는 함수
    return c.real() * c.real() + c.imag() * c.imag();
}

bool compare(Complex2 c1, Complex2 c2){
    // sort에서 사용할 compare 함수
    // calc 값이 큰 순서대로 내림차순 정렬한다.
    return calc(c1) > calc(c2);
}

int main(){
    srand((unsigned)time(NULL)); // 난수 발생기 초기화

    vector<Complex2> cv1(5);
    cout << "벡터1에 저장된 값 : ";
    for(auto &c : cv1){
        double r = rand() % 101 - 50; // -50 ~ 50 까지의 난수 발생
        double i = rand() % 101 - 50; // -50 ~ 50 까지의 난수 발생

        Complex2 tmp(r,i);
        c += tmp;
        c.display();
    }
    cout << endl;
    sort(cv1.begin(), cv1.end(), compare);

    cout << "정렬된 벡터 : ";
    for(auto c :cv1) {
        c.display();
    }

    cout << endl << endl;

    vector<Complex2> cv2(5);
    cout << "벡터2에 저장된 값 : ";
    for(auto &c : cv2){

        double r = rand() % 101 - 50; // -50 ~ 50 까지의 난수 발생
        double i = rand() % 101 - 50; // -50 ~ 50 까지의 난수 발생

        Complex2 tmp(r,i);
        c += tmp;
        c.display();
    }
    cout << endl;
    sort(cv2.begin(), cv2.end(), compare);

    cout << "정렬된 벡터 : ";
    for(auto c :cv2) {
        c.display();
    }

    cout << endl << endl;

    // 합병 결과를 저장할 벡터
    vector<Complex2> cv3(cv1.size() + cv2.size());
    // cv1과 cv2를 합병한 결과를 cv3에 저장
    merge(cv1.begin(), cv1.end(), cv2.begin(), cv2.end(), cv3.begin(), compare);

    cout << "백터1과 백터2를 합병한 결과 : ";
    for (auto c : cv3) {
        c.display();
    }

    return 0;
}