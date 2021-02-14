//
// Created by starm on 2020-11-22.
//

#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;

Person::Person(const char *name, const char *addr){
    this -> name = new char[strlen(name) + 1];
    strcpy(this -> name, name);
    this -> addr = new char[strlen(addr) + 1];
    strcpy(this -> addr, addr);
}

Person::Person(const Person& person) {
    name = new char[strlen(person.name) + 1];
    memcpy(name, person.name, sizeof(char) * strlen((person.name)) + 1);
    addr = new char[strlen(person.addr) + 1];
    memcpy(addr, person.addr, sizeof(char) * strlen((person.addr)) + 1);
}

Person::Person(Person&& person): name(person.name), addr(person.addr) {
    person.name = nullptr;
    person.addr = nullptr;
}

Person& Person::operator=(const Person& person){
    cout << "대입 연산자" << endl;
    this -> name = new char[strlen(person.name) + 1];
    memcpy(name, person.name, sizeof(char) * strlen((person.name)) + 1);
    this -> addr = new char[strlen(person.addr) + 1];
    memcpy(addr, person.addr, sizeof(char) * strlen((person.addr)) + 1);
    return *this;
}

Person& Person::operator=(Person &&person) {
    delete[] name;
    delete[] addr;
    name = person.name;
    addr = person.addr;
    person.name = nullptr;
    person.addr = nullptr;
    return *this;
}

Person::~Person() {
    delete [] name;
    delete [] addr;
}

void Person::print() const {
    cout << addr << "에 사는 " << name << "입니다" << endl;
}

void Person::chAddr(const char *newAddr) {
    delete [] addr;
    addr = new char[strlen(newAddr) + 1];
    strcpy(addr, newAddr);
}