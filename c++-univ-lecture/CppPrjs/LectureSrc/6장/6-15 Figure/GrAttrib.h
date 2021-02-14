#ifndef   GRATTRIB_H_INCLUDED
#define   GRATTRIB_H_INCLUDED
#include  <string>
using namespace std;

class GrAttrib {         		// �׷��� �Ӽ� Ŭ����
	string lineColor;  		// �� �� �Ӽ�
	string fillColor;  		// ���� ���� �� �Ӽ�
public:
	// �׷��� �Ӽ� ��ü ������
	GrAttrib() : lineColor("������"), fillColor("���") { }
	GrAttrib(const string &lc, const string &fc)
		: lineColor(lc), fillColor(fc) { }

	// �Ӽ� ���� ����Լ�
	void setLineColor(const string &lc) {
		lineColor = lc;
	}
	void setFillColor(const string &fc) {
		fillColor = fc;
	}

	// �Ӽ� ���� �д� ����Լ�
	string getLineColor() const {
		return lineColor;
	}
	string getFillColor() const {
		return fillColor;
	}
};

extern  GrAttrib  curAttrib; 	// ���� �Ӽ��� ��Ÿ���� ���� ��ü
#endif  // GRATTRIB_H_INCLUDED