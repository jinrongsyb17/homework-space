#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,b,c;
	a = 2;
	do {
		b = 2;
		c = 1;
		do {
			if (a%b == 0)
			{
				c = 0;
				break;
			}
			b++;
		}while (b < a);
			if (c)
				cout << a << endl;
		
    
			a++;
	} while (a <= 100);
	return 0;

}