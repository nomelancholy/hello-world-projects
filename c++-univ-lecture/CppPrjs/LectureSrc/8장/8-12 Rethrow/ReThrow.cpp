#include	<iostream>
#include	<exception>
using namespace std;

class  Exception1 : public exception {
public:
	Exception1() : exception() {}
	const char* what() const { return "Exception1"; }
};

class  Exception2 : public exception {
public:
	Exception2() : exception() {}
	const char* what() const { return "Exception2"; }
};

double f(double a)
{
	if (a < 0)
		throw Exception1();
	return sqrt(a);
}

double	g(double x)
{
	double y;
	try {
		y = f(x);
	}
	catch (const Exception1 &e) {
		cerr << e.what() << " �߻�" << endl;
		throw;
	}
	return y;
}

int h()
{
	try {
		cout << g(-1.0) << endl;
	}
	catch (const Exception1& e) {
		cerr << e.what() << " �߰� ó��" << endl;
	}
	catch (...) {
		cerr << "ó������ ���� ����" << endl;
	}
	return 0;
}

int i() noexcept
{
	return h();
}

int main()
{
	i();
	return 0;
}