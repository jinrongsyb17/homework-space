// 3-9-质数(2017310302-徐茂宾-金融实验班17)

#include "pch.h"
#include <iostream>
using namespace std;

int zhishu(int a);

void main()
{
	int a;
	cout << "请输入一个大于2的正整数：";
	cin >> a;
	if (zhishu(a))
		cout << a<<"是质数";
	else
		cout << a << "不是质数";
}

int zhishu(int a) {
	int b,c;
	c = a;
	for (b = 1;b < c;b++)
		if (c%b == 0) {
			b = 0;
			break;
		}
	if (b = 0)
		return b = 0;
	else
		return b = 1;
}