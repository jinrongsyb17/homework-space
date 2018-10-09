#include<iostream>
using namespace std;
double fibonacci(int n) {
	if (n == 1|| n == 2)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	int num;
	cout << "请输入一个数，来试试Fibonacci级数：" << endl;
	cin >> num;
	cout << "级数的值为：" << fibonacci(num) << endl;
	system("pause");
	return 0;
}