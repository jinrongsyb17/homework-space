// 2-32 while.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int n = 18;
	int m = 0;
	while (m != n)
	{
		cout << "猜猜这个数的值为多少？(0~100)：";
		cin >> m;
		if (n > m)
			cout << "你猜的太小了！" << endl;
		else if (n < m)
			cout << "你猜的太大了！" << endl;
		else
			cout << "你猜对了！" << endl;
	}
    return 0;
}

