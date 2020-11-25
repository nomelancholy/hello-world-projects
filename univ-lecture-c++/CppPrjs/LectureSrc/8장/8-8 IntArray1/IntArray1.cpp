#include  <iostream>
#include  <cstring>
#include  "IntArray1.h"
using	namespace	std;

Array::Array(int s) : size(s) 			// �⺻ ������ ����
{
	buf = new int[s];
	memset(buf, 0, sizeof(int)*s);
}

int& Array::operator[](int offset)
{
	if (offset<0 || offset >= size) 	// �������� �˻�
		throw BadIndex(); 				// ����ó�� ���� �� ����
	return buf[offset];
}

const int& Array::operator[](int offset) const
{
	if (offset<0 || offset >= size)  	// �������� �˻�
		throw BadIndex();  				// ����ó�� ���� �� ����
	return buf[offset];
}

ostream& operator<<(ostream &os, Array &arr)
{
	for (int i = 0; i < arr.getsize(); i++) {
		if (i % 5 == 0)
			os << endl;
		os << "[" << i << "] = " << arr[i] << "   ";
	}
	return os;
}