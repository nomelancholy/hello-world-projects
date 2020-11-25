#ifndef  STUDENT2_H_INCLUDED
#define  STUDENT2_H_INCLUDED
#include  <iostream>
#include  <string>
#include "Person2.h"

// person의 파생 클래스 student를 선언함.
class Student : public Person {
	string school;
public:
	Student(const string& n, const string& s) : Person(n) {
		cout << "Student의 생성자" << endl;
		school = s;
	}
	~Student() {
		cout << "Student의 소멸자" << endl;
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