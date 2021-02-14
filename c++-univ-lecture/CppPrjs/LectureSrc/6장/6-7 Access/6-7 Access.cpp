#include  <iostream>
using  namespace  std;

class BaseC {
	int a; 	// private ���
protected:
	int b; 	// protected ���
public:
	int c; 	// public ���
	int geta() const { return a; }  	// OK: �Ҽ� ��� ���
	void set(int x, int y, int z) { a = x; b = y; c = z; } // OK
};

class Drvd1 : public BaseC {
	// class BaseC�� ������ ��� a�� class Drvd1�� �׼����� �� ����
	// class BaseC�� ������ ��� b�� class Drvd1�� protected�� ��޵ǰ�
	// class BaseC�� ������ ��� c�� class Drvd1�� public���� ��޵�
	// b�� c�� �� Ŭ������ �׼����� �� ����
public:
	int sum() const { return a + b + c; } 	// error: a�� ���
	void printbc() const { cout << b << ' ' << c << '\n'; } // OK
};

class Drvd2 : protected BaseC {
	// class BaseC�� ������ ��� a�� class Drvd2�� �׼����� �� ����
	// class BaseC�� ������ ��� b�� c�� class Drvd2�� protected�� 
	// ��޵�
	// b�� c�� class Drvd2�� �׼����� �� ����.
public:
	int sum() const { return a + b + c; }  // error: a�� ���
	void printbc() const { cout << b << ' ' << c << '\n'; } // OK
};

class Drvd3 : private BaseC {
	// class BaseC�� ������ ��� a�� class Drvd3�� �׼����� �� ����
	// class BaseC�� ������ ��� b�� c�� class Drv3�� private�� ��޵�
	// b�� c�� class Drvd3�� �׼����� �� ����
public:
	int sum() const { return a + b + c; }	// error: a�� ���
	void printbc() const { cout << b << ' ' << c << '\n'; } // OK
};

int  main()    	// �ܺ� �Լ�
{
	Drvd1   d1;
	d1.a = 1;  	// private ����� �׼����ϹǷ� error
	d1.b = 2; 		// protected ����� �׼����ϹǷ� error
	d1.c = 3;  	// public ����� �׼����ϹǷ� OK
	Drvd2   d2;
	d2.a = 1; 		// private ����� �׼����ϹǷ� error
	d2.b = 2; 		// protected�� ��޵Ǵ� ����� �׼����ϹǷ� error
	d2.c = 3;  	// protected�� ��޵Ǵ� ����� �׼����ϹǷ� error
	Drvd3   d3;
	d3.a = 1; 		// private ����� �׼����ϹǷ� error
	d3.b = 2; 		// private�� ��޵Ǵ� ����� �׼����ϹǷ� error
	d3.c = 3;  	// private�� ��޵Ǵ� ����� �׼����ϹǷ� error
	return 0;
}