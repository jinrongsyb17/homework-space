// ConsoleApplication3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int fib(int i);
int fib(int i)
{
	cout << "fib(" << i << ")";
	if (i < 3)
	{
		cout << "=1.\n";
		return (1);
	}
	else
	{
		cout << "=fib(" << i - 1 << ")+fib(" << i - 2 << ").\n";
		return (fib(i - 1) + fib(i - 2));
	}
}
int main()
{
	int n, ans;
	cout << "输入数字：";
	cin >> n;
	ans = fib(n);
	cout << "其Fibonacci级数是" << ans;
	return 0;
}