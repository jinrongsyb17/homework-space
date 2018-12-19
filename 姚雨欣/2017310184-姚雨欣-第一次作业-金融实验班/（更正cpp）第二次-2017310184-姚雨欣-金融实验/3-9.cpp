#include <iostream>
#include <cmath>
using namespace std;
int y(int i);
int main() {
	int i;
	cout << "输入一个数字" << endl;
	cin >> i;
	if (y(i))
		cout << "是质数" << endl;
	else
		cout << "不是质数" << endl;
	system("pause");
	return 0;
	
}

int y(int i) {
	int j, k, m;
	m = 1;
	k = sqrt(i);
	for (j = 2; j <= k; j++) {
		if (i%j == 0) {
			m = 0;
			break;
		}
	}
	return m;
}