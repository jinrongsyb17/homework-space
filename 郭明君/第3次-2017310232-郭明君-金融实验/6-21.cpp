// 6-21.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int count(string str)
{
	int i, num = 0;
	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a'&&str[i] <= 'z') || (str[i] >= 'A'&&str[i] <= 'Z'))
			num++;
	}
	return num;
}

void main()
{
	string text;
	cout << "输入一个英语句子:" << endl;
	getline(cin, text);
	cout << "这个句子里有" << count(text) << "个字母" << endl;
	return;
}
