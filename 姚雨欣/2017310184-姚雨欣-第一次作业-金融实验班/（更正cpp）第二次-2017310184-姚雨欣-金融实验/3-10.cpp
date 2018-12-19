#include <iostream>
#include <cmath>
using namespace std;
 
int fun1(int i, int j);

int main() {
	int i, j, x, y;
	cout << "输入一个整数" << endl;
	cin >> i;
	cout << "输入一个整数" << endl;
	cin >> j;


	x = fun1(i, j);
	y = i*j / x;
	cout << i << "和" << j << "的公约数是" <<x<< endl;
	cout << i << "和" << j << "的公倍数是" <<y<< endl;
	system("pause");
	return 0;
}

int fun1(int i, int j) {
	int t;
	if (i < j) {
		t = i;
		i = j;
		j = t;

	}
	while (j != 0) {
		t = i%j;
		i = j;
		j = t;
	}
	return i;
}