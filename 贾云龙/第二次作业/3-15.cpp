#include<iostream>
#include<cmath>
using namespace std;
int getpower(int x, int y)
{
	return pow(x, y);
}
double getpower(double x, int y)
{
	return pow(x, y);
}
int main()
{
	int a, m; 
	double b;
	cout << "请输入整数a和m实数b" << endl;
	while (1)
	{ cin >> a >> m >> b;
	cout << "a^m=" << getpower(a, m) << endl; 
	cout << "b^m=" << getpower(b, m) << endl; }
	return 0;
}
