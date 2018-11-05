// 3-10.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
int fn1(int a, int b);

int main()
{
	int a,b,x,y;
	cout << "请输入一个正整数"<<endl;
	cin >> a;
	cout << "请输入另一个正整数"  << endl;
	cin >> b;
	x= fn1(a, b);
	y = a*b / x;
	cout << "它们的最大公约数为" << x << endl;
	cout << "它们的最大公倍数为" << y << endl;
    return 0;
}
int fn1(int a, int b)
{int temp; if (a < b)
{
	temp = a;
	a = b;
	b = a;
}
while (b != 0)
{
	temp = a%b;
	a = b;
	b = temp;
}
return a;
}