#ifndef   CBPARTTIME_H_INCLUDED
#define   CBPARTTIME_H_INCLUDED
#include  "CBStudent.h"
#include  "CBEmployee.h"

class Parttime : public Student, public Employee {
public:
	Parttime(const string& n, const string& s, const string& c)
		: Student(n, s), Employee(n, c) {}
};
#endif  	// CBPARTTIME_H_INCLUDED