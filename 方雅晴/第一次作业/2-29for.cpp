#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout << "1-100间的质数有：" << endl;
	int a = 1, b, c, d;
	for (a; a <= 100; a++)
	{
		c = sqrt(a);
		d = 1;
		for (b = 2; b <= c; b++)
			if (a%b == 0)
			{
				d = 0;
				break;
			}
		if (d)
			cout << a << " ";
	}
	system("pause");
	return 0;
}