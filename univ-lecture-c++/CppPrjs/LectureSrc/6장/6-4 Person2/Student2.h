#ifndef  STUDENT2_H_INCLUDED
#define  STUDENT2_H_INCLUDED
#include  <iostream>
#include  <string>
#include "Person2.h"

// person�� �Ļ� Ŭ���� student�� ������.
class Student : public Person {
	string school;
public:
	Student(const string& n, const string& s) : Person(n) {
		cout << "Student�� ������" << endl;
		school = s;
	}
	~Student() {
		cout << "Student�� �Ҹ���" << endl;
	}
	string getSchool() const
	{
		return school;
	}
	void print() const {
		Person::print();
		cout << " goes to " << school;
	}
};

#endif  	// STUDENT2_H_INCLUDED