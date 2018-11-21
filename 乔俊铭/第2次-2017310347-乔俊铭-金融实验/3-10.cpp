#include <iostream>
using namespace std;

void fun1() {

	int i = 0;
	bool m = (i = -1);
	cout << m << endl;
}
int number(int n) {
	int i;
	for (i = 2; i <= n / 2; i++)
	{
		if (n%i == 0) break;
		else;
	}
	if (i == (n / 2 + 1)) return 1;
	else return 0;
}

void fun2() {
	int a;
	cin >> a;
	if (number(a) == 1) cout << "right";
	else cout << "wrong";
	return 0

