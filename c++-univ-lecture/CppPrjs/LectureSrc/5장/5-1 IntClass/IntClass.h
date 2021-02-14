#pragma once
class  IntClass1 {
	int  a;
public:
	IntClass1(int n = 0) : a(n) {} 	// ������
	IntClass1  operator ++ () { 	// ���� ǥ�� ++ ������ ��������
		++a;
		return *this;
	}
	int  getValue() const { return a; }
};

class  IntClass2 {
	int  a;
public:
	IntClass2(int n = 0) : a(n) {} 	// ������
	IntClass2  operator ++ (int) { // ���� ǥ�� ++ ������ ��������
		IntClass2 tmp(*this);
		++a;
		return tmp;
	}
	int  getValue() const { return a; }
};
