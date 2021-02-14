#include  	<iostream>
#include  	<string>
#include	"Circle.h"

// ���� �߽���ǥ�� (dx, dy)��ŭ �̵�
void Circle::move(double dx, double dy) {
	cx += dx;
	cy += dy;
}

// ��ǥ ������ �������� s�� ũ�� ����
void Circle::scale(double s) {
	cx *= s;
	cy *= s;
	radius *= s;
}

// ���� �׸��� ��� ���
void Circle::draw() const {
	cout << "�� �׸���" << endl;
	cout << "(" << cx << ", " << cy << ")�������� ";
	cout << radius << "��ŭ ������ ��� ������ ";
	cout << attrib.getLineColor() << "���� �׸���" << endl;
	cout << "���θ� " << attrib.getFillColor();
	cout << "���� ä���." << endl;
}