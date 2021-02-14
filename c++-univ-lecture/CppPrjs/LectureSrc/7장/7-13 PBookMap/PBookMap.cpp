#include	<iostream>
#include	<string>
#include	<map>
using namespace std;

template<typename T>
class LESS_T {
public:
	bool operator()(const T& a, const T& b) const {
		return a < b;
	}
};

int main()
{
	map<string, string, LESS_T<string>>	pBook{
		{ "������", "010-2233-4354" },
		{ "�ڿ�ö", "010-2233-4455" }
	};
	pBook["��ö��"] = "010-1234-5678";

	pBook.insert(make_pair("�ֽ�ȣ", "010-7531-3456"));
	pBook.insert({ "�ڿ�ö", "010-1357-2468" });

	for (auto pb = pBook.begin(); pb != pBook.end(); ++pb)
		cout << pb->first << "  " << pb->second << endl;
	cout << pBook.size() << "���� ��ϵǾ� �ֽ��ϴ�." << endl;

	string	str;
	cout << endl << "ã�� �̸� : ";
	cin >> str;
	auto result = pBook.find(str);
	if (result != pBook.end()) {
		cout << result->first << "���� ��ȭ��ȣ�� ";
		cout << result->second << " �Դϴ�." << endl;
	}
	else
		cout << str << "���� ã�� �� �����ϴ�." << endl;

	return 0;
}
