#ifndef  INTARRAY1_H_INCLUDED
#define  INTARRAY1_H_INCLUDED
#include  <iostream>
using  namespace  std;

const int DefaultSize = 10;
class Array {
	int  *buf;
	int  size;
public:
	Array(int s = DefaultSize);
	virtual ~Array() { delete[] buf; }
	int& operator[](int offset);
	const int& operator[](int offset) const;
	int getsize() const { return size; }
	friend ostream& operator<<(ostream&, Array&);
	class BadIndex {};		// exception class
};
#endif        	// INTARRAY1_H_INCLUDED