#include<iostream>
using namespace std;
int main() {
	int n = 1 + rand() % 100, a;
	cout << "请输入一个1-100的数字" << endl;
	cin >> a;
	while (a > n) {
		cout << "请输入一个更小的数字" << endl;
		cin >> a;
	};
	while (a < n) {
		cout << "请输入一个更大的数字" << endl;
		cin >> a;
	};
	if (a = n) cout << "恭喜您！猜对了！" << endl;
	return 0;
}
