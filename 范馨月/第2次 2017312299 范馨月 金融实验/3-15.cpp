#include<iostream>
using namespace std;

int getPower(int x, int y) {
	int result = 1;
	if (y < 0)
		return 0;
	else {
		for (int i = 0; i < y; i++) {
			result *= x;
		}
		return result;
	}
}

double getPower(double x, int y) {
	double result = 1;
	for (int i = 0; i < y; i++) {
			result *= x;
	}
	return result;
}

int main() {
	int a, m;
	double b;
	cout << "Please enter an integer and a double in order: ";
	cin >> a >> b;
	cout << "Please enter an integer as the value of the exponent: ";
	cin >> m;
	cout << "The result of power(a,m) is " << getPower(a, m) << endl;
	cout << "The result of power(b,m) is " << getPower(b, m) << endl;
	system("pause");
	return 0;
}