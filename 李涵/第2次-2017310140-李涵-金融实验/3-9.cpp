// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
//判断一个数是否是质数
int prime(int i);
int prime(int i)
{
	int j, k;
	k = 1;
	for (j = 2; j <= i; j++)
	{
		if (i%j == 0)
		{
			k = 0;
			break;
		}
	}
	return k;
}
int main()
{
	int i;
	cout << "输入一个整数：";
	cin >> i;
	if (prime(i))
		cout << i << "是质数。";
	else
		cout << i << "不是质数。";
}
