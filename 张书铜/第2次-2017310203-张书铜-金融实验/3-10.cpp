#include<iostream>
#include<cmath>
using namespace std;

int f1(int i, int j);

int main()
{
	int i, j, a, b;
	cout << "请输入一个整数" << endl;
	cin >> i;
	cout << "请再输入一个整数" << endl;
	cin >> j;

	a = f1(i, j);
	b = i * j / a;
	cout << "最大公约数是" << a << endl;
	cout << "最小公倍数是" << b << endl;
	return 0;
}

int f1(int i, int j)
{
	int a;
	if (i < j)
	{
		a = i;
		i = j;
		j = a;
	}
	while(j!=0)
	{
		int b;
		b = i % j;
		i = j;
		j = b;
	}
	return i;
}
