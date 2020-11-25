#ifndef  CBSTUDENT_H_INCLUDED
#define  CBSTUDENT_H_INCLUDED
#include  <iostream>
#include  <string>
#include  "CBPerson.h"
using  namespace  std;

// 파생 클래스 Student를 Person을 상속받아 정의함.
class Student : public Person {
	string school;
public:
	Student(const string& n, const string& s) :
		Person(n), school(s) {}
	void print() const {
		Person::print();
		cout << " goes to " << school << endl;
	}
};
#endif   	// CBSTUDENT_H_INCLUDED