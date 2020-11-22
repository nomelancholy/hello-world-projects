//
// Created by starm on 2020-11-22.
//

#include <iostream>
#include "Person.h"
using namespace std;

int main(){
    Person *p1 = new Person("최재욱", "서울");
    p1->print();

    Person p2(*p1);
    p2.chAddr("부산");

    p2.print();

    p1->print();

    p2 = *p1;

    p2.print();

    Person p3(p2);
    p3.print();

    return 0;
}