#ifndef  STUDENT1_H_INCLUDED
#define  STUDENT1_H_INCLUDED
#include  <iostream>
#include  <string>
#include "Person1.h"

// �Ļ� Ŭ���� Student�� Person�� ��ӹ޾� ������.
class Student : public Person {
	string school;
public:
	void setSchool(const string& s) { school = s; }
	string getSchool() const { return school; }
	void print() const {
		Person::print();
		cout << " goes to " << school;
	}
};
#endif  	// STUDENT1_H_INCLUDED