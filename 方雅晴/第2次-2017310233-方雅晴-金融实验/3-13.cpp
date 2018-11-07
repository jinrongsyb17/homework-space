#include<iostream>
using namespace std;
int F(int n)
{
	int x;
	if (n == 1 || n == 2)
		x = 1;
	else
		x = F(n - 1) + F(n - 2);
	return x;
}

int main()
{
	int  j;
	for (j = 1; j <= 20; j++)
		cout << F(j) << '\t';

	system("pause");
	return 0;
}