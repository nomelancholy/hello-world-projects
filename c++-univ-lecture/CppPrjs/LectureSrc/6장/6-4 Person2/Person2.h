#ifndef  PERSON2_H_INCLUDED
#define  PERSON2_H_INCLUDED
#include  <iostream>
#include  <string>
using namespace std;

class Person {
	string name;
public:
	Person(const string& n) {
		cout << "Person�� ������" << endl;
		name = n;
	}
	~Person() {
		cout << "Person�� �Ҹ���" << endl;
	}
	string getName() const { return name; }
	void print() const { cout << name; }
};
#endif   	// PERSON2_H_INCLUDED