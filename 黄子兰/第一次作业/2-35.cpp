#include<iostream>
using namespace std;
int main()
{
	int a,b;
	a=1,b=1;
	for(a=1;a<=9;a++)
	{
		for(b=1;b<=a;b++)
		{
			cout<<a*b<<" ";
		}
		cout<<endl;
	}
	return 0;
 } 
