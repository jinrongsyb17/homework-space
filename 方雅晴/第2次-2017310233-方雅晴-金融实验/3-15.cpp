#include<iostream>
using namespace std;
int getpower(int, int);
double getpower(double, int);
int main()
{
	int a, m;
	double b;
	cout << "请输入一个整数a和一个实数b作为底数，一个整数m作为指数。" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "m=";
	cin >> m;
	cout << "a^m=" << getpower(a, m) << endl;
	cout << "b^m=" << getpower(b, m);
	system("pause");
	return 0;
}
int getpower(int x, int y)
{
	if (y < 0)
		return 0;
	else if (y == 0)
		return 1;
	else if (y == 1)
		return x;
	else
		return(x *getpower(x, y - 1));
}
double getpower(double x, int y)
{
	if (y < 0)
		return (1 / getpower(x, -y));
	else if (y == 0)
		return 1;
	else if (y == 1)
		return x;
	else
		return(x * getpower(x, y - 1));
}