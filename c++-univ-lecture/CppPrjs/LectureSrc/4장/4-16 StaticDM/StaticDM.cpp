#include  <iostream>
#include "NamedObj.h"
using  namespace  std;

void	f()
{
	NamedObj x("Third"); // �� ��° ��ü�� ����
	x.display(); 			// �Լ� ��ȯ �� x�� �Ҹ��
}

int  main()
{
	cout << "NamedObj Ŭ������ ��ü �� : "
		 << NamedObj::nObj() << endl;
	NamedObj a("First"); 	  	// ù ��° ��ü ����
	NamedObj b("Second");		// �� ��° ��ü ����
	a.display();
	b.display();
	f();
	NamedObj c("Fourth");		// �� ��° ��ü ����
	c.display();
	cout << "NamedObj Ŭ������ ��ü �� : "
	 	 << NamedObj::nObj() << endl;
	return 0;
}
