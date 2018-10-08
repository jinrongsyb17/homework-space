#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b, c;
	for (a = 2;a <= 100;a++)
	{
		for (b = 2;b < a;b++)
		{
			if(a%b==0)
		    {
			c = 0;
			break;
		    }
			if (c)
				cout << a << endl;
	     }
		return 0;
	}

}

