#include<iostream>
using namespace std;
bool isPrime(int x) {
	int count = 0;
	for (int i = 1; i <= x; i++) {
		if (x%i == 0)
			count++;
	}
	if (count == 2)
		return true;
	else
		return false;
}
int main() {
	int num;
	cout << "请输入一个数，来判断是否是质数" << endl;
	cin >> num;
	if (isPrime(num))
		cout << "这是个质数" << endl;
	else
		cout << "真是抱歉，这个不是质数啊" << endl;
	system("pause");
	return 0;
}