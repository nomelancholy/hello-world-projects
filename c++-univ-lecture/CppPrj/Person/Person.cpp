#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;

Person::Person(const char* name, const char* addr) {
    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name)+1, name);
    this->addr = new char[strlen(addr) + 1];
    strcpy_s(this->addr, strlen(addr) + 1, addr);
    cout << "Person 객체 생성함 (" << name << ")" << endl;
}

Person::~Person() {
    cout << "Person 객체 제거함 (" << name << ")" << endl;
    delete[] name;
    delete[] addr;
}

void Person::print() const {
    cout << addr << "에 사는 " << name << "입니다." << endl;
}

void Person::chAddr(const char* newAddr) {
    delete[] addr;
    addr = new char[strlen(newAddr) + 1];
    strcpy_s(this->addr, strlen(newAddr) + 1, newAddr);
}