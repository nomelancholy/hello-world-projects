#include	<iostream>
#include	"VecF.h"
using namespace std;

VecF::VecF(int d, float *a) : n{ d } {
	arr = new float[d];
	if (a) memcpy(arr, a, sizeof(float) * n);
}

VecF::VecF(const VecF &fv) : n{ fv.n } {
	arr = new float[n];
	memcpy(arr, fv.arr, sizeof(float)*n);
}

VecF::VecF(VecF &&fv) : n{ fv.n }, arr{ fv.arr } {
	fv.arr = nullptr;
	fv.n = 0;
}

VecF::~VecF() {
	delete[] arr;
}

VecF	VecF::add(const VecF &fv) const {
	VecF	tmp(n); 	// º¤ÅÍÀÇ µ¡¼À °á°ú¸¦ ÀúÀåÇÒ ÀÓ½Ã °´Ã¼
	for (int i = 0; i < n; i++)
		tmp.arr[i] = arr[i] + fv.arr[i];
	return tmp; 	// µ¡¼À °á°ú¸¦ ¹ÝÈ¯ÇÔ
}

VecF	VecF::operator+(const VecF &fv) const {
	VecF	tmp(n); 	// º¤ÅÍÀÇ µ¡¼À °á°ú¸¦ ÀúÀåÇÒ ÀÓ½Ã °´Ã¼
	for (int i = 0; i < n; i++)
		tmp.arr[i] = arr[i] + fv.arr[i];
	return tmp; 	// µ¡¼À °á°ú¸¦ ¹ÝÈ¯ÇÔ
}

VecF&	VecF::operator=(const VecF &fv) {
	if (n != fv.n) {
		delete[] arr;
		arr = new float[n = fv.n];
	}
	memcpy(arr, fv.arr, sizeof(float)*n);
	return *this;
}

VecF&	VecF::operator=(VecF &&fv) {
	delete[] arr;
	n = fv.n;
	arr = fv.arr;
	fv.arr = nullptr;
	return *this;
}

ostream&  operator<<(ostream &os, const VecF &fv)
{
	cout << "[ ";
	for (int i = 0; i < fv.n; i++)
		cout << fv.arr[i] << " ";
	cout << "]";
	return os;
}
