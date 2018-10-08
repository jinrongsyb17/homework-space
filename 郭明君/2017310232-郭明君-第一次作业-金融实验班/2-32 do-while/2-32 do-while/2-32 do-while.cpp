// 2-32 do-while.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n = 18;
	int m = 0;
	do{
		cout << "猜猜这个数的值为多少？(0~100)：";
		cin >> m;
		if (n > m)
			cout << "你猜的值太大了！" << endl;
		else if (n < m)
			cout << "你猜的值太小了！" << endl;
		else
			cout << "你猜对了！" << endl;
		
	} while (n != m);
    return 0;
}

