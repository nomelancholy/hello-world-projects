#include  <cstring>
#include "NamedObj.h"

NamedObj::NamedObj(const char  *s)
{
	name = new char[strlen(s) + 1];	// ���ڿ��� ������ ������ �Ҵ�
	strcpy(name, s);
	id = ++nConstr;   // ������ ��ü�� ���� ������Ű�� �̸� ID�� �ο�
}

NamedObj::~NamedObj()
{
	++nDestr;    	// �Ҹ�� ��ü�� ���� ������Ŵ.
	delete[] name;
}

// static ������ ����� ���� �� �ʱ�ȭ
int  NamedObj::nConstr = 0;
int  NamedObj::nDestr = 0;
