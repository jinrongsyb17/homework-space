#include<iostream>
using namespace std;

int main() {
	int n = 28;
	int m = 0;
	do
	{
		cout << "请猜一猜这个数是多少？(1~100)" << endl;
		cin >> m;
		if (n > m) cout << "你猜得太小了。" << endl;
		else if (n < m) cout << "你猜得太大了。" << endl;
		else cout << "你猜对了！" << endl;
	} while (n != m);
	system("pause");
	return 0;
}