//3-8
#include<iostream>
#include<cmath>
using namespace std;
bool prime_num(int n) {
	for (int i = 2; i <= ceil(sqrt(n)); i++)
	{
		if (n%i == 0) return 0;
	}
	return 1;
}
void main() 
{
	int n;
	cout << "Please enter a number you want to check." << endl;
	cin >> n;

	int i =	prime_num(n);
	if (i == 0) cout << "This is not a prime number." << endl;
	if (i == 1)cout << "It is a prime number." << endl;

	system("pause");
}