#include  <iostream>
#include "Person1.h"
#include "Student1.h" 
using  namespace  std;

int main()
{
	Person  dudley;         		// ���� Ŭ������ ��ü ����
	dudley.setName("Dudley");		// ���� Ŭ������ �Լ� ȣ��
	Student harry; 					// �Ļ� Ŭ������ ��ü ���� 
	harry.setName("Harry");			// ���� Ŭ������ �Լ� ȣ��
	harry.setSchool("Hogwarts");	// �Ļ� Ŭ������ �Լ� ȣ��
	dudley.print();       			// ���� Ŭ������ �Լ� ȣ��
	cout << endl;
	harry.print();     				// �Ļ� Ŭ������ �Լ� ȣ��
	cout << endl;
	harry.Person::print();  		// ���� Ŭ������ �Լ� ȣ��
	cout << endl;
	return 0;
}