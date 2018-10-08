#include<iostream>
using namespace std;
int main() {
	int m, n;
	for (m = 1; m <= 9; m++)
	{
		for (n = 1; n <= 9; n++)

			cout << m << "*" << n << " = " << n*m << endl;
	}
	system("pause");
	return 0;
}