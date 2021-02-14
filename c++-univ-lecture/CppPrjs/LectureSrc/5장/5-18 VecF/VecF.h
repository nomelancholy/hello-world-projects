#ifndef 	VEC_F_H_INCLUDED
#define 	VEC_F_H_INCLUDED
#include 	<iostream>
#include 	<cstring>
using namespace std;

class VecF {
	int		n;
	float	*arr;
public:
	VecF(int d, float *a = nullptr);
	VecF(const VecF &fv);
	VecF(VecF &&fv);
	~VecF();
	VecF	add(const VecF &fv) const;
	VecF	operator+(const VecF &fv) const;
	VecF&	operator=(const VecF &fv);
	VecF&	operator=(VecF &&fv);
	friend	ostream& operator<<(ostream &os, const VecF &fv);
};
#endif // !VEC_F_H_INCLUDED
