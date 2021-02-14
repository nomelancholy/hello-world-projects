#ifndef  SAFEINTARRAY_H_INCLUDED
#define  SAFEINTARRAY_H_INCLUDED
#include  <iostream>
class  SafeIntArray {
	int  limit;     	// ������ ����
	int  *arr;      	// ������ �������
public:
	SafeIntArray(int n) : limit(n) {
		arr = new int[n]; 	// ���� �Ҵ�
	}
	~SafeIntArray() {
		delete[] arr;
	}
	int	size() const { return limit; }
	// i�� ���Ҹ� ��ȯ�ϴ� ����Լ�
	int&  operator[](int i) {
		if (i < 0 || i >= limit) {
			std::cout << "÷�ڰ� ������ ��� ���α׷��� �����մϴ�.";
			exit(EXIT_FAILURE);
		}
		return arr[i];  	// i�� ���� ��ȯ
	}
	int  operator[](int i) const {
		if (i < 0 || i >= limit) {
			std::cout << "÷�ڰ� ������ ��� ���α׷��� �����մϴ�.";
			exit(EXIT_FAILURE);
		}
		return arr[i];  	// i�� ���� ��ȯ
	}
};
#endif
