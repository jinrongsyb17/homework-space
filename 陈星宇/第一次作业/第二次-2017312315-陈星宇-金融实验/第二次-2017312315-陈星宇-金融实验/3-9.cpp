#include <iostream>
#include <cmath>
using namespace std;

bool prime(int i) {
	bool isPrime == true;
	for (int j = 2; j <= sqrt(i); j++) {
		if (i % j == 0) {
			isPrime == false;
			break;
		}
	}
	return isPrime;
}

int main() {
	int i;
	cout << "请输入一个整数：";
	cin >> i;
	if (prime(i))
		cout << i << "是质数" << endl;
	else
		cout << i << "不是质数" << endl;
	return 0;
}