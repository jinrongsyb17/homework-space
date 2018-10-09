#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	int x;
	srand(time(0));
	int number = rand() % 100 + 1;
	cout << "猜一下这个数: ";
	cin >> x;
	while (1)
	{
		if (x != number)
		{
			if (x<number)
			{
				cout << "小于给定数" << endl;
			}
			else
			{
				cout << "大于给定数" << endl;
			}
		}
		else
		{
			cout << "恭喜您猜对了！" << endl; break;
		}
		cin >> x;
	}
	return 0;
}
