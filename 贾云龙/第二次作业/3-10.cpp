#include<iostream>
#include<cmath>
using namespace std;
int fn(int i, int j);//求最大公约数

int main() {
	int i, j, s, t;
	cout << "请输入一个正整数:";
	cin >> i;
	cout << "请输入一个另一个正整数";
	cin >> j;
	s = fn(i, j);
	t = i*j / s;
	cout << i << "和" << j << "的最大公约数是：" << s << endl;
	cout << i << "和" << j << "的最小公倍数是：" << t << endl;
	return 0;

}
int fn(int i, int j)
{
	int m;
	if (i < j) {
		m = i;
		i = j;
		j = m;
	}
	while (j != 0) {
		m = i%j;
		i = j;
		j = m;
	}return i;
}