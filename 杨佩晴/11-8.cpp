// 11-8.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	int n;
	cout << "Please input a number:";
	cin >>n;
	cout << oct<<n<< endl;
	cout << hex << n << endl;	
	return 0;
}