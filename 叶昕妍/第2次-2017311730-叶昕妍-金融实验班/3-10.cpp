#include<iostream>
using namespace std;

int gongyueshu(int a, int b){
	int i;
	if (a < b) { i = a; a = b; b = i; }
	while (b != 0) { i = a%b; a = b; b = i; }
	return a;

}
int main() {
	int a, b, m, n;
	cout << "请输入一个正整数" << endl;
	cin >> a;
	cout << "请输入另一个正整数" << endl;
	cin >> b;
	m = gongyueshu(a, b);
	n = a*b / m;
	cout << a << "和" << b << "的最大公约数是" << m << endl;
	cout << a << "和" << b << "的最小公倍数是" << n << endl;
	system("pause");
	return 0;
}
