#include<iostream>
#include<cmath>
using namespace std;
int prime(int n);

int main() {
	int n;
	cout << "请输入一个整数:";
	cin >> n;
	if (prime(n))
		cout << n << "是质数" << endl;
	else
		cout << n << "不是质数" << endl;
	system("pause");
	return 0;

}int prime(int n) {
	int i, k,j;
	j = 1;
	k = sqrt(n);
	for (i = 2; i <= k; i++) {
		if (n%i == 0) {
			j = 0;
			break;
		}
	}return j;

}