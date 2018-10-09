// 2-29 for.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int i, j, k, flag;
	for (i = 2; i <= 100; i++)
	{
		flag = 1;
		k= sqrt(i);
		for (j = 2; j <= k; j++)
		{
			if (i%j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag)
			cout << i << "是质数." << endl;
	}
    return 0;
}

