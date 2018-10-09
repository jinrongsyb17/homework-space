#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout << "1-100间的质数有：" << endl;
	int a = 1, b, c, d, e;
	while (a <= 100)
	{
		b = sqrt(a);
		d = 2;
		e = 1;
		while (d <= b)
		{
			c = a%d;
			if (c == 0)
			{
				e = 0;
				break;
			}
			d++;
		}
		if (e)
			cout << a << " ";
		a++;
	}
	system("pause");
	return 0;
}
