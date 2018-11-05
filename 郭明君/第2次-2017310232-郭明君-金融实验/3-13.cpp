// 3-13.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream> 
#include <math.h>
using namespace std;

int Fibonacci(int x) {
	if (x <= 2)
		return 1;
	else return Fibonacci(x - 1) + Fibonacci(x - 2);
}

int main() {
	int n;
	cout << "请输入项数： " << endl;
	cin >> n;
	cout << "第" << n << "项的Fibonacci级数的值为" << Fibonacci(n) << endl;
	return 0;
}

