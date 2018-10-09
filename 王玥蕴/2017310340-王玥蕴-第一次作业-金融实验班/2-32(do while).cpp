#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	int x;
	srand(time(0));
	int number = rand() % 100 + 1;
	do {
		cout << "猜一下这个数: ";
		cin >> x;
		if (x < number)
		{
			cout << "小了呢" << endl;
		}
		else if (x>number)
		{
			cout << "大了呢" << endl;
		}
		else
			cout << "恭喜猜对了！" << endl;
	} while (x != number);
	return 0;
}
