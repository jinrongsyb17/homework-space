#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

void swap(int &a, int &b) {
	int tem = a;
	a = b;
	b = tem;
}

int Gcd(int a, int b) {
	if (a<b)
		swap(a, b);
	return b == 0 ? a : Gcd(b, a%b);
}

int main() {
	int a, b;
	while (cin >> a >> b) {
		cout << Gcd(a, b) << endl;
	}
	return 0;
}
