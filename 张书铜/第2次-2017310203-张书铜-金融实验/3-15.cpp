#include<iostream>
using namespace std;

int getPower(int x, int y);
double getPower(double x, int y);

int main()
{
	int a, m;
	double b;
	int c;
	double d;
	cout << "请输入一个整数底数：";
	cin >> a;
	cout << "请输入一个实数底数";
	cin >> b;
	cout << "请输入次数";
	cin >> m;
	c = getPower(a, m);
	d = getPower(b, m);
	cout << a << "的" << m << "次幂是" << c << endl;
	cout << b << "的" << m << "次幂是" << d << endl;
	return 0;
}

int getPower(int x,int y)
{
	if (y < 0)
		return 0;
	else if (y == 0)
		return 1;
	else if (y == 1)
		return x;
	else
		return (x*getPower(x, y - 1));
}

double getPower(double x, int y)
{
	if (y < 0)
		return 0;
	else if (y == 0)
		return 1;
	else if (y == 1)
		return x;
	else
		return (x*getPower(x, y - 1));
}