#ifndef  CBPERSON_H_INCLUDED
#define  CBPERSON_H_INCLUDED
#include  <iostream>
#include  <string>
using  namespace  std;

class Person {
	string name;
public:
	Person(const string& n) : name(n) {}
	virtual void print() const { cout << name; }
};
#endif  	// CBPERSON_H_INCLUDED