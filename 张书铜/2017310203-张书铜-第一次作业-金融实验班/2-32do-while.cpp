#include<iostream>
using namespace std;

int main()
{
	int m, n;
	m = 37;
	n = 0;
	do {
		cout << "请输入您猜的数字";
		cin >> n;
		if (n > m)
			cout << "您猜大了"<<endl;
		else if (n < m)
			cout << "您猜小了"<<endl;
		else cout << "您猜对了"<<endl;


	} while (n != m);
		return 0;
}