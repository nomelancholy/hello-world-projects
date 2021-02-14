#ifndef  METER_H_INCLUDED
#define  METER_H_INCLUDED
#include <iostream>
using  namespace  std;

class Meter
{
	int	m;  	// ����
	int	cm; 	// ��Ƽ����
public:
	// ������
	Meter() : m(0), cm(0) {}
	Meter(int meter, int cmeter) : m(meter), cm(cmeter) {}
	void	display() const {
		if (m)
			cout << m << "m ";
		if (cm || !m)
			cout << cm << "cm";
		cout << endl;
	}
	int  getM() const { return m; }		// ������ ��� m ��ȯ
	int  getCm() const { return cm; }	// ������ ��� cm ��ȯ
};
#endif		// METER_H_INCLUDED