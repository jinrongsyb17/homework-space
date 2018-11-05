#include<iostream>
using namespace std;
int getpower(int x, int y) {
	if (y == 1) return x;
	else
		return(x*getpower(x, y - 1));
}
double getpower(double x, int y) {
	if (y == 1) return x;
	else
		return(x*getpower(x, y - 1));
}

int main() {
	int number1, number2,power;
	cout << "请输入一个整数底数" << endl;
	cin >> number1;
	cout << "请输入一个实数底数" << endl;
	cin >> number2;
	cout << "请输入指数" << endl;
	cin >> power;
	cout << getpower(number1, power) << endl;
	cout << getpower(number2, power) << endl;
	return 0;
}