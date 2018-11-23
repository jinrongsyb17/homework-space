// 6-23.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
#define N 8
float grades[N]; //存放成绩的数组

int main()
{
	int i;
	float total, average;
		//提示输入成绩
		for (i = 0; i < N; i++)
		{
			cout << "Enter grades#" << (i + 1) << ":";
				cin >> grades[i];
		}
	total = 0;
	for (i = 0; i < N; i++)
		total += grades[i];
	average = total / N;
	cout << "\nAverage grade:" << average << endl;

    return 0;
}

