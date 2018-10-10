// 3-15.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
int fib(int n);


int main()
{
	int n;
	cout << "Enter number"<<endl;
	cin >> n;
	cout << "Fibonacci级数为" <<fib(n)<< endl;

    return 0;
}
int fib(int n)
{
	if (n == 1 || n == 2)
	{return 1; }
	else { return fib(n - 1) + fib(n - 2); }
}