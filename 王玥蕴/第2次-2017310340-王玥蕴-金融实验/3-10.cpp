#include<iostream>
using namespace std;
int GongYueMax(int a, int b)
{
	int i;
	for (i = a; i>0; i--)
	{
		if (a%i == 0 && b%i == 0)
		{
			return i;
		}
	}
	return 0;
}
int GongBeiMin(int a, int b)
{
	int i;
	for (i = a; i <= a*b; i++)
	{
		if (i%a == 0 && i%b == 0)
		{
			return i;
		}
	}
}
void main()
{
	int a, b;
	cout << "请输入两个正整数：" << endl;
	cin >> a >> b;
	cout << "最大公约数："<<GongYueMax(a, b) << endl;
	cout <<"最小公倍数："<< GongBeiMin(a, b) << endl;
}
