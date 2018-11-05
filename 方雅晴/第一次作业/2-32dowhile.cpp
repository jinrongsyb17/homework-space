#include<iostream>
using namespace std;
int main()
{
	int a = 30, b = 0;
	do
	{
		cout << "猜猜这个数是多少？(1-100)：";
		cin >> b;
		if (a < b)
			cout << "你猜的数比这个数大。\n";
		else if (a>b)
			cout << "你猜的数比这个数小。\n";
		else
			cout << "恭喜你！猜对了！\n";
	} while (a != b);
	system("pause");
	return 0;
}