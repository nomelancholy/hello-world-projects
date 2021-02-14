#include  <iostream>
#include  "IntArray2.h"
using	namespace	std;

int& gArray::operator[](int offset)
{
	if (offset<base)
		throw LowIndex(offset, base);          // 抗寇 按眉 积己
	if (offset >= (base + size))
		throw HighIndex(offset, base + size - 1);  // 抗寇 按眉 积己
	return buf[offset - base];
}

const int& gArray::operator[](int offset) const
{
	if (offset<base)
		throw LowIndex(offset, base);          // 抗寇 按眉 积己
	if (offset >= (base + size))
		throw HighIndex(offset, base + size - 1);  // 抗寇 按眉 积己
	return buf[offset - base];
}

ostream& operator<<(ostream &os, gArray &garr)
{
	int s = garr.getsize();
	int b = garr.getbase();
	for (int i = b; i<b + s; i++) {
		if (i % 5 == 0)
			os << endl;
		os << "[" << i << "] = " << garr[i] << "   ";
	}
	return os;
}