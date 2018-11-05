#include<iostream>   
using namespace std;

int main() {
	int a, b = 2, m, n;
	do
	{
		m = 1; n = b / 2; a = 2;
		do {
			if (b%a == 0)
			{
				m = 0; break;
			}
			a++;
		} while (a <= n);
		if (m)
			cout << b << "ÊÇÖÊÊý" << endl;
		b++;
	} while (b <= 100);
	system("pause");
	return(0);
}