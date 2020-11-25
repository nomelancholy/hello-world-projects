#ifndef   	TRIANGLE_H_INCLUDED
#define   	TRIANGLE_H_INCLUDED
#include  	<iostream>
#include	"Figure.h"
using namespace std;

class Triangle : public Figure {
	// �ﰢ���� �� ������ ��ǥ (x1, y1), (x2, y2), (x3, y3)
	double	x1, y1, x2, y2, x3, y3;
public:
	// ������ �׷��� �Ӽ��� ���� �ﰢ�� ��ü ����
	// v : �� ���� ������ ��ǥ �迭
	Triangle(const double v[3][2]);

	// �ﰢ���� �̵�, ���� ���� ũ������, �׸��� ����Լ� 
	void  move(double dx, double dy);
	void  scale(double s);
	void  draw() const;
};
#endif // TRIANGLE_H_INCLUDED