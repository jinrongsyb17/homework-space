#include<iostream>
using namespace std;
void main()
{
	int a, b, n, m;
	b = 2;
	do
	{
		m = 1;
		n = b / 2;
		a=2;
		do
		{
			if (b%a == 0)
			{
				m = 0;
				break;
			}
			a++;
		} while (a <= n);
		if (m)
			cout << b << " ";
		b++;
	} while (b<101);
}