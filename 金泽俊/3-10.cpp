#include<iostream>
#include<cmath>
using namespace std;
int largestFactor(int m, int n)
{
	int t = 0;
	if (m>n)
	{
		t = n;
		n= m;
		m = t;
	}
	else t = m;
	for (; t>1; t--)
	{
		if ((m%t == 0) && (n%t == 0))
		{
			return t; break;
		}
	}
	return 1;
}
int leastCommonMultiple(int m, int n)
{
	int j;
	j = m*n / largestFactor(m, n);
	return j;
}
int main() 
{
	int m, n;
	cout << "Please enter two numbers you want to check." << endl;
	cin >> m >> n;

	cout << "The largest factor is " << ends;
	int i = largestFactor(m, n);
	cout << i << endl;

	cout << "The least common multiple is" << ends;
	int j = leastCommonMultiple(m, n);
	cout << j << endl;

	system("pause");
	return 0;
}