// 3-15思考.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int getPower(int x, int y) {
	if (y < 0)
		return 0;
	else if (y == 0)
		return 1;
	else if (y == 1)
		return x;
	else
		x = x*getPower(x, (y - 1));
	return x;
}

double getPower(double x, int y) {
	if (y == 0) {
		return 1;
	}
	else if (y == 1) {
		return x;
	}
	else if (y > 1) {
		x = x*getPower(x, (y - 1));
		return x;
	}
	else {
		y = -y;
		x = x*getPower(x, (y - 1));
		x = 1 / x;
		return x;
	}
}

int main()
{
	int a, m;
	double b;
	cout << "请输入一个整数a和一个实数b作为底数:" << endl;
	cin >> a >> b;
	double c =double(a);
	cout << "请再输入一个整数m作为指数 ：" << endl;
	cin >> m;
	cout << "a的m次方等于";
	cout << getPower(c, m) << endl;
	cout << "b的m次方等于";
	cout << getPower(b, m) << endl;
	return 0;
}