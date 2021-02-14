#include <iostream>
using namespace std;
int main()
{
	double  a[50], b[100];
	for (auto &x : a)	// 랜덤 값으로 배열 a 초기화
		x = rand() / static_cast<double>(RAND_MAX);
	for (auto &x : b)	// 랜덤 값으로 배열 b 초기화
		x = rand() / static_cast<double>(RAND_MAX);
	double  sum = 0, sqSum = 0;
	for (int i = 0; i < 50; i++) {
		sum += a[i];
		sqSum += a[i] * a[i];
	}
	cout << sqSum / 50 - sum * sum / (50 * 50) << endl;
	sum = sqSum = 0;
	for (int i = 0; i < 100; i++) {
		sum += b[i];
		sqSum += b[i] * b[i];
	}
	cout << sqSum / 100 - sum * sum / (100 * 100) << endl;
	return 0;
}