#include<iostream>
#include<cmath>
using namespace std;
int Fibonacci(int n)
{
	if (n <= 2)return 1;
	else return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main() 
{
	int i = 1;
	for (i = 1; i <= 7; i++)
	{int j = 1;
	for (j = 1; j <= 7; j++)
	{
		int k;
		k = (i - 1) * 7 + j;
		cout << Fibonacci(k)<<'\t'<< ends;
	}
	cout << endl;
	}
	system("pause");
	return 0;
}
