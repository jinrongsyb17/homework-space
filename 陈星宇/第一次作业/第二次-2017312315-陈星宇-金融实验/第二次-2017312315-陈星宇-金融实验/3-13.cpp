#include<iostream>
using namespace std;

int fib(int n);

int main() {
	int n;
	cout << "请输入一个正整数：";
	cin >> n;
	cout << "\n";
	int result = fib(n);
	cout << result << "是级数递归调用的结果。" << endl;
	return 0;
}

int fib(int n) {
	cout << n << "的级数正在被调用...";
	if (n < 3) {
		cout << "返回 1!\n";
		return (1)；
	}
	else {
		cout << "调用" << n - 1 << "的级数和" << n - 2 << "的级数\n";
		return (fib(n - 1) + fib(n - 2));
	}

}