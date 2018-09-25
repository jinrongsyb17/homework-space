#include<iostream>
using namespace std;

int main()
{
	int i, j, n, m;
	i = 2;
	do
	{
		m = 1;
		n = i / 2;
		j = 2;
		do
		{
			if (i%j == 0)
			{
				m = 0;
				break;
			}
			j++;
		} while (j <= n);
		if (m)
			cout << i << " ";
		i++;
	} while (i<101);
	return 0;
}
