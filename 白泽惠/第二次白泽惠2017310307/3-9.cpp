#include "pch.h"
#include <iostream>
using namespace std;

int zzs(int x) {
	int i = 2;
	while (i <= x)
	{
		if (x%i != 0)
			i++;
		else
		{
			cout << x << "不是质数" << endl;
			goto number1;
		}
	}
	cout << x << "是质数"<<endl;
number1:
	return 0;
}

int main() {
	int n;
	cout << "enter the number: ";
		cin >> n;
	zzs(n);
	return n;
}