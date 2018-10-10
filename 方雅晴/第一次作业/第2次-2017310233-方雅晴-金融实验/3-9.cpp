#include<iostream>
#include<cmath>
using namespace std;
int prime_num(int x)
{
	int i, j, k;
	k = 1;
	i = sqrt(x);
	for (j = 2; j <= i; j++)
		if (x%j == 0)
		{
			k = 0;
			break;
		}
	return(k);
}


int main()
{
	int a, b, n;
	while (1)
	{
		cout << "请输入一个大于1的整数:" << endl;
		cin >> n;
		if (n <= 0)
			cout << "你输入的数不在范围" << endl;
		else
		{
			a = prime_num(n);
			if (a == 0)
				cout << n << "不是质数" << endl;
			else
				cout << n << "是质数" << endl;
		}
	}
	system("pause");
	return 0;
}