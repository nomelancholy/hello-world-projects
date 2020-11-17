//
// Created by starm on 2020-11-17.
//

#include <iostream>
#include "Counter.h"
using namespace std;

int main(){
    Counter counter;
    cout << "계수기의 현재 값 : " << counter.getValue() << endl;
    counter.count();
    counter.count();
    cout << "계수기의 현재 값 : " << counter.getValue() << endl;
    return 0;
}