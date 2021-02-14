//
// Created by starm on 2020-11-22.
//

#ifndef CPPPRJS_PERSON_H
#define CPPPRJS_PERSON_H


class Person {
    char *name;
    char *addr;
public:
    Person(const char *name, const char *addr);
    Person(const Person& person);
    Person(Person&& person);
    Person& operator =(const Person& person);
    Person& operator =(Person&& person);
    ~Person();
    void print() const;
    void chAddr(const char *newAddr);
};


#endif //CPPPRJS_PERSON_H
