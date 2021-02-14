#ifndef  NAMEDOBJ_H_INCLUDED
#define  NAMEDOBJ_H_INCLUDED
#include  <iostream>
using  namespace  std;

class  NamedObj {
	char 	*name;
	int 	id;
	// static ������ ���
	static  int  nConstr;   		// ������ ��ü ��
	static  int  nDestr;     	// �Ҹ�� ��ü ��
public:
	NamedObj(const char  *s); 	// ������
	~NamedObj();           		// �Ҹ���
	void  display()  const { 	// ��ü�� �Ӽ� ���
		cout << "ID : " << id << " --> �̸�: " << name << endl;
	}
	static  int  nObj() { 		// �����ϴ� ��ü �� ��ȯ
		return nConstr - nDestr;
	}
};
#endif