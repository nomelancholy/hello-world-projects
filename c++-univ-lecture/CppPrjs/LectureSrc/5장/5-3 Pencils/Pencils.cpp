#include  <iostream>
#include "Pencils.h"
using namespace std;

Pencils  Pencils::operator++() { 		// ++ ������(���� ǥ��)
	if (++np >= 12)			// ������ 1 ������Ų��. ����� 12���� ũ��
		++dozens, np = 0; 	// Ÿ ���� 1 ������Ű��, ������ 0
	return *this;      		// ������ ����� ��ȯ
}

Pencils  Pencils::operator++(int) { 	// ++ ������(���� ǥ��)
	Pencils  tmp(*this);	// ���� ��ü�� ����
	if (++np >= 12)			// ������ 1 ������Ų��. ����� 12���� ũ��
		++dozens, np = 0;	// Ÿ ���� 1 ������Ű��, ������ 0
	return tmp;             // ������ ��ü�� ��ȯ
}

void  Pencils::display()  const
{
	if (dozens) {
		cout << dozens << "Ÿ ";
		if (np) cout << np << "�ڷ�";
		cout << endl;
	}
	else
		cout << np << "�ڷ�" << endl;
}
