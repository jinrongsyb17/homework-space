#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	int num, a;
	srand(time(0));
	num = rand() % 100 + 1; //1~100随机生成一个数
	cout << num << endl;
	while (num)
	{
		cout << "用户输入一个数：";
		cin >> a;
		if (a > num)
		{
			cout << "大于给力数" << endl;
		}
		else if (a < num)
		{
			cout << "小于给定数" << endl;
		}
		else
		{
			num = num - a;
			cout << "成功猜对！" << endl;
		}
	}

	return 0;
}