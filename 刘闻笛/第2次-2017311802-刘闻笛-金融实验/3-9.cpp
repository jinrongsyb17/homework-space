// ConsoleApplication4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
//判断是否为质数
int prime(int i);

void main()
{
	int i;
	cout << "请输入一个整数：";
	cin >> i;
	if (prime(i))
		cout << i << "是质数" << endl;
	else
		cout << i << "不是质数" << endl;
}
int prime(int i)
{
	int j, k, flag;
	flag = 1;
	k = sqrt(i);
	for (j = 2; j <= k; j++)
	{
		if (i%j == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag)
		return 1;
	else
		return 0;
}

