#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b, c;
	a = 2;
	while (a <= 100)
	{
		c = 1;
		b = 2;
        while(b<a)
		{
			if (a%b == 0)
			{
				c = 0;
				break;
			}
			b++;
		

		}
		if (c = 1)
			cout << a << endl;
		a++;
	}

	return 0;
	

}