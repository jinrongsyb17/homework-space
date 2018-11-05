// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int max_div(int i, int j);
int max_div(int i, int j)
{
	int temp;
	if (i<j)
	{
		temp = j;
		j = i;
		i = temp;
	}
	while (j != 0);
	{
		i = j;
		j = i%j;
	}
	return i;
}
int main()
{
	int i, j, k, l;
	cout << "输入整数：";
	cin >> i;
	cout << "输入另一个整数：";
	cin >> j;
	k=max_div(i, j);
	cout << k << "是最大公约数。" << endl;
	l = i*j / k;
	cout << l << "是最小公倍数。" << endl;
	return 0;
}