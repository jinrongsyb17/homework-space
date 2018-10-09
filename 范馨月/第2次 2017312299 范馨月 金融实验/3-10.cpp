#include<iostream>
using namespace std;

int max(int num1, int num2) {
	int divisor = 1;
	for (int i = 2; i< num1; i++) {
		if (num1%i == 0 && num2%i == 0)
			divisor = i;
	}
	return divisor;
}

int min(int num1, int num2) {
	return num1 * num2 / max(num1, num2);
}

int main() {
	int num1, num2;
	cout << "Please enter two integers:";
	cin >> num1 >> num2;
	cout << "The greatest common divisor of the two integers is " << max(num1, num2) << endl;
	cout<<"The least common multiple of the two integers is " << min(num1, num2);
	system("pause");
	return 0;
}