#include<iostream>
using namespace std;
int main()
{
	int a, b, m, n;
	for (b = 2; b <= 100; b++)
	{
		m = 1, n = b / 2;
		for (a = 2; a <= n; a++)
		{
			if (b%a == 0)
			{
				m = 0; break;
			}
		}if (m)
			cout << b << "ÊÇÖÊÊý" << endl;
	}
	system("pause");
	return(0);
}