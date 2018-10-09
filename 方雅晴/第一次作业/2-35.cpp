#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "\t";
	{for (a = 1; a <= 9; a++)
		cout << a << "\t";
	}
	for (a = 1; a <= 9; a++)
	{
		cout << a << "\t";
		for (b = 1; b <= 9; b++)
			cout << a*b << "\t";
	}
	cout << endl;
	system("pause");
	return 0;
}