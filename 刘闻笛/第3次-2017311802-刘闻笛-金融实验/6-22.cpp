// 6-22.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
void reverse(char*s, char*t) {
	char c;
	if (s < t) {
		c = *s;
		*s = *t;
		*t = c;
		reverse(s+=1,t-=1);

	}
}
void reverse(char*s) {
	reverse(s, s + strlen(s) - 1);
}
void main()
{
	char strl[20];
	cout << "输入一个字符串" << endl;
	cin >> strl;
	cout << "原字符串为：" << strl << endl;
	reverse(strl);
	cout << "倒序反转后为：" << strl << endl;
}

