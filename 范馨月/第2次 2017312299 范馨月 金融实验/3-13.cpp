#include<iostream>
using namespace std;

int Fibonacci(int n) {
	int F1 = 1;
	int F2 = 1;
	if ((n == 1) | (n == 2))
		return 1;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main() {
	int n;
	cout << "Please enter an integer: ";
	cin >> n;
	cout << "The result is " << Fibonacci(n);
	system("pause");
	return 0;
}