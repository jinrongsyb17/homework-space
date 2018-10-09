# include<iostream>
using namespace std;

int main()
{
	int i, j, n, m;
	for (i = 2; i<101; i++)
	{
		m = 1;
		n = i / 2;
		for (j = 2; j <= n; j++)
		{
			if (i%j == 0)
			{
				m = 0;
				break;
			}
		}
		if (m)
			cout << i << " ";
	}
	return 0;

}
