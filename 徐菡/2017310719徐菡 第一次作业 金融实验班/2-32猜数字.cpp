// ConsoleApplication9.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int i = 11, k = 1;
		cout << "请猜一个数（0-100）：";
		cin >> k;
		while (i != k);
		{
			if (i > k);
			cout << "您猜的数偏小，请再猜一次：";
			cin >> k;
			if (i < k);
			cout << "您猜的数偏大，请再猜一次：";
				cin >> k;
		}
		cout << "猜对啦！";
    return 0;
}

