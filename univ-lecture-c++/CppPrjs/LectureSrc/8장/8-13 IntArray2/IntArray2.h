#ifndef  INTARRAY2_H_INCLUDED
#define  INTARRAY2_H_INCLUDED
#include  "IntArray1.h"

class  gArray : public Array {
	int	base;
public:
	gArray(int b, int s) : base(b), Array(s) {}
	int& operator[](int offset);
	const int& operator[](int offset) const;
	int getbase() const { return base; }
	friend ostream& operator<<(ostream&, gArray&);
	class LowIndex : public Array::BadIndex {
	public:
		int lowBound;
		LowIndex(int n, int l) : BadIndex(n), lowBound(l) {}
		const char* what() const { return "인덱스 하한 오류"; }
	};
	class HighIndex : public Array::BadIndex {
	public:
		int highBound;
		HighIndex(int n, int h) : BadIndex(n), highBound(h) {}
		const char* what() const { return "인덱스 상한 오류"; }
	};
};
#endif  // INTARRAY2_H_INCLUDED