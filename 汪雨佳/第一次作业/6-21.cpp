// 6-21.cpp
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int count(string a);

int main()
{
	string text;
	cout << "请输入一条英文句子：" << endl;
	getline(cin, text);
	cout << "这条句子里共有" << count(text) << "个字母。" << endl;
	return 0;
}

int count(string a) {
	int i, num = 0;
	for ( i = 0; a[i]; i++)
	{
		if ((a[i] >= 'a'&& a[i] <= 'z') || (a[i] >= 'A'&& a[i] <= 'Z'))
			num++;
	}return num;
}