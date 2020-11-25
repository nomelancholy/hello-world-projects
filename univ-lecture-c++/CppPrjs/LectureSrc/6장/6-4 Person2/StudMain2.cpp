#include  <iostream>
#include "Person2.h"
#include "Student2.h"
using  namespace  std;

int main()
{
	Student harry("Harry", "Hogwarts");
	cout << harry.getName() << " goes to "
		 << harry.getSchool() << endl;
	return 0;
}