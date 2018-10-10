#include<iostream>
using namespace std;

int main() 
{
	int n, m;
	n = 37;
	m = 0;
	while (n != m)
	{
		cout << "请输入你猜测的数字";
		cin >> m;
			if (m > n)
				cout << "您猜得大了" << endl;
			else if(m<n)
				cout << "您猜的小了" << endl;
			else cout << "您猜对了" << endl;

	}
	return 0;
}