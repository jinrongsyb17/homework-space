#include<iostream>
using namespace std;

int gcd(int x, int y) {
	int t;
	t = (x > y) ? y : x;
	while (x%t!=0|| y%t != 0) {
	t--;
}
	return t;
}

int lcm(int x, int y) {
	int t = gcd(x, y);
	return x*y / t;
}

int main() {
	int num1, num2;
	cout << "请输入两个数，求取最大公约数和最小公倍数" << endl;
	cin >> num1 >> num2;
	cout << "最大公约数为：" << gcd(num1, num2) <<"    "<< "最小公倍数为：" << lcm(num1, num2);
	system("pause");
	return 0;
}