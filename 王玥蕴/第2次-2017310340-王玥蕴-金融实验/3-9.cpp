#include<iostream>
using namespace std;
int prime(int n)
{
	if (n>1)
	{
		int i = n - 1;
		while (n%i != 0)
		{
			i--;
		}
		if (i == 1)
			return 1;
		else return 0;
	}
	else return 0;
}
int main()
{
	int a;
	cout << "请输入一个整数" << endl;
	while (1<2)
	{
		cin >> a;
		if (prime(a) != 0)
			cout << a << "是质数" << endl;
		else
			cout << a << "不是质数" << endl;
	}
	return 0;
}
