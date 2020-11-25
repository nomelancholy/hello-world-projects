#ifndef  CHARSTACK_H_INCLUDED
#define  CHARSTACK_H_INCLUDED

class  CharStack {
	enum { size = 20 }; 		// ������ ũ��
	int   top; 					// ������ �����͸� ����Ű�� ������
	char  buf[size];  			// ������ �������
public:
	CharStack() : top{ size } {}  // ������
	bool  chkEmpty() const {	// ���ÿ� �����Ͱ� ������ true
		return top == size;
	}
	bool  chkFull() const {  	// ������ ���� �� ������ true
		return !top;
	}
	bool  push(char ch); 		// ���ÿ� �����͸� ����.
	char  pop(); 				// ���ÿ��� �����͸� ����.
};
#endif
