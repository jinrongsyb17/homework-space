#include<iostream>
#include<cmath>
using namespace std;
int A(int x, int y)
{
	int i, j;
	for (i = 1; i <= x&&i <= y; i++)
		if (x%i == 0 && y%i == 0)
			j = i;
	return(j);
}

int B(int a, int b)
{
	int k, l;
	if (a<b)
		l = b;
	else
		l = a;
	for (k = l; (k%a != 0) || (k%b != 0);)
	{
		k++;
	}
	return(k);
}


int main()
{
	int m, n, p, q;
	while (1)
	{
		cout << "请输入两个整数:" << endl;
		cin >> m >> n;
		p = A(m, n);
		q = B(m, n);
		cout << m << "和" << n << "的最大公因数是：" << p << endl;
		cout << m << "和" << n << "的最小公倍数是：" << q << endl;
	}
	system("pause");
	return 0;
}