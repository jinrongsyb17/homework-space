#include<iostream>
#include<cmath>
using namespace std;

int prime(int i);
 
int main()
{
	int i;
	cout << "输入一个整数" << endl;
	cin >> i;
	if (prime(i))
		cout << i << "是质数" << endl;
	else
		cout << i << "不是质数" << endl;
	return 0;
}

int prime(int i)
{
	int a, b, c;
	c = 1;
	b = sqrt(i);
	for(a=2;a<=b;a++)
	{
		if (i%a == 0) 
		{ 
			c = 0;
		    break;
		}
	}
	return c;
}