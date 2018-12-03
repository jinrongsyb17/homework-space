#include <iostream>
#include <cmath>
using namespace std;

int mcd(int i, int j) {
	if (i < j) {
		int trans = i;
		i = j;
		j = trans;
	}
	int result = 1;
	for (int k = 2; k <= j; k++)
		if (i%k == 0 && j%k == 0)
			result = k;
	return result;
}

int main() {
	int i, j, x, y;
	cout << "请输入一个正整数：";
	cin >> i;
	cout << "请输入另一个正整数：";
	cin >> j;

	x = mcd(i, j);
	y = i * j / x;
	cout << i << "和" << j << "的最大公约数是：" << x << endl;
	cout << i << "和" << j << "的最小公倍数是：" << y << endl;
	return0;
}