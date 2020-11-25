#ifndef COUNTERM_H_INCLUDED
#define COUNTERM_H_INCLUDED

class  CounterM { 	// Ŭ���� CounterM�� ���� ����
	const int maxValue;	// ������� �ִ�
	int  value;     	// private ������ ���
public:               	// public ����Լ�
	CounterM(int mVal) : maxValue{ mVal }, value{ 0 } { }  	// ������
	void  reset()     	// ������� ���� 0���� ����.
	{
		value = 0;
	}
	void  count()   	// ������� ���� 1 ������Ŵ.
	{
		value = value < maxValue ? value + 1 : 0;
	}
	int  getValue() const	// ������� ���� ���� ��ȯ��
	{
		return value;
	}
};

#endif  // COUNTERM_H_INCLUDED