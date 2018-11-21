// 6-23求平均成绩.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a[8];
	for (int i = 0; i < 8; i++){
		cout << "请输入第" << i + 1 << "个人的成绩：" << endl;
		cin >> a[i];
	}
	int s = (a[0] + a[1] + a[2] + a[3] + a[4] + a[5] + a[6] + a[7]) / 8;
	cout << s;
	return 0;
}

