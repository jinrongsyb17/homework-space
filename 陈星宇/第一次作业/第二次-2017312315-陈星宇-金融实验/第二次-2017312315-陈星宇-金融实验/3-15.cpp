#include<iostream>
using namespace std;

int getPower(int x, int y);
double getPower(double x, int y);

int main() {
	int a, power;
	double b;
	cout << "Enter an int base number:";
	cin >> a;
	cout << "Enter an double base number:";
	cin >> b;
	cout << "To what power?";
	cin >> power;
	cout << a << " to the " << power << "th power is " << getPower(a, power) << endl;
	cout << b << " to the " << power << "th power is " << getPower(b, power) << endl;
	return 0;
}

int getPower(int x, int y) {
	if (y == 1)
		return x;
	else if (y == 0)
		return 1;
	else if (y < 0)
		return 0;
	else
		return (x*getPower(x, y - 1));
}

double getPower(double x, int y) {
	if (y == 1)
		return x;
	else if (y == 0)
		return 1;
	else if (y < 0)
		return 1 / getPower(x, -y);
	else
		return(x*getPower(x, y - 1));
}