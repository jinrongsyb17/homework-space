// 3-10最大公约数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iosream>
using namespace std;
int Diviser(int a, int b) {
	int c;
	if (a >= b)
		c = b;
	else c = a;
	for (int i = c; i >= 1; i--) {
		if (a%i == 0 && b%i == 0)
			return i;
	}
}
int Multiple(int a, int b) {
	int d;
	if (a >= b)
		c = a;
	else c = b;
	for (int k = c; k <= a*b; k++) {
		if (k%a == 0 && k%b == 0)
			return k;
	}
}

int main()
{
	cout << "请输入两个数: " << endl;
	cin >> a >> b;
	cout << "这两个数的最大公约数是";
	cout << Diviser(a, b);
	cout << "这两个数的最小公倍数是";
	cout << Multiple(a, b);
	return 0;
}