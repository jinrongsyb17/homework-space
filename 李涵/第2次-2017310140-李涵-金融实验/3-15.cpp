// ConsoleApplication4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int getPower(int x, int y);
int getPower(int x, int y)
{
	if (y<0)
	{
		return (0);
	}
	else if (y = 0)
	{
		return (1);
	}
	else if (y = 1)
	{
		return(x);
	}
	else
	{
		return(x*getPower(x, y - 1));
	}
}
double getPower(double x, int y);
double getPower(double x, int y)
{
	if (y < 0)
	{
		return(1 / getPower(x, -y));
	}
	else if (y = 0)
	{
		return(1);
	}
	else if (y = 1)
	{
		return (x);
	}
	else
	{
		return(x*getPower(x, y - 1));
	}
}
int main()
{
	int a, m, ans1;
	double b, ans2;
	cout << "输入一个整数作为底数：";
	cin >> a;
	cout << "输入一个实数作为底数：";
	cin >> b;
	cout << "输入一个整数作为指数：";
	cin >> m;
	ans1 = getPower(a, m);
	ans2 = getPower(b, m);
	cout << "整数的幂结果为" << ans1;
	cout << "实数的幂结果为" << ans2;
	return 0;
}