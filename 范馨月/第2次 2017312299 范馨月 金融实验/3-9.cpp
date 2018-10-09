#include<iostream>
#include "Դ.h"
using namespace std;

bool isPrime(int number) {
	bool isPrime = true;
	for (int i = 2; i < number / 2; i++) {
		if (number%i == 0)
			isPrime = false;
	}
	return isPrime;
}

int main() {
	int number;
	cout << "Please enter an integer: ";
	cin >> number;
	if (isPrime(number)) {
		cout << "The number you entered is a prime number.";
	}
	else cout << "The number you entered is not a prime number";
	system("pause");
}