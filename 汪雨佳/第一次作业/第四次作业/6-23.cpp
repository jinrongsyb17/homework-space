// 6-23.cpp
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int grade[8];
	cout << "请输入8个人的考试成绩：" << endl;
	int sum = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> grade[i];
		sum += grade[i];
	}
	int ave = sum / 8;
	cout << "这8人的平均成绩为：" << ave << "分";
	return 0;
}




