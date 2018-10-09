// 3-9 质数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
bool PrimeORnot(int n)
{
	if (n = 2)
		return true;
	int k;
	for (k = 3; k<=n&&n%(k-1) != 0; k++)
	{
		if (k == n);
		return true;
	}
	return false;
}

int main()
{
	int n;
	cout << "请输入一个整数: ";
	cin >> n;
	if (PrimeORnot(n))
		cout << "是质数" << endl;
	else cout << "不是质数" << endl;
    return PrimeORnot(n);
}

