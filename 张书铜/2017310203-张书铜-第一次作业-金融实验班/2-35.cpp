#include<iostream>
#include<iomanip>
using namespace std;

main() {
	int a, b,c;
	a = 1;
	while (a<10)
	{
		b = 1;
		while(b<10)
		{
			c = a * b;
			cout << a << "*" << b << "=" << c << endl;
			b++;

		}
		a++;
	}
	return 0;
}