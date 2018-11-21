// 6 - 23.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

#define N 8

float grades[N];

int main() {
	int i;
	float total, average;

	for (i = 0; i < N; i++) {
		cout << "Enter grade #" << (i + 1) << ": ";
		cin >> grades[i];
	}

	total = 0;
	for (i = 0; i < N; i++)
		total += grades[i];
	average = total / N;
	cout << "\nAverage grade: " << average << endl;
	return 0;
}

