#ifndef  PERSON_H_INCLUDED
#define  PERSON_H_INCLUDED
class  Person {     	// Ŭ���� Person�� ���� ����
	char	*name;   	// �̸��� �����ϴ� ������ ��� 
	char 	*addr;   	// �ּҸ� �����ϴ� ������ ���
public:                	// public ����Լ�
	Person(const char  *name, const char  *addr); // ������
	~Person();
	void  print() const; 	 // �̸��� �ּ� ���
	void  chAddr(const char  *newAddr);  // �ּ� ����
};
#endif