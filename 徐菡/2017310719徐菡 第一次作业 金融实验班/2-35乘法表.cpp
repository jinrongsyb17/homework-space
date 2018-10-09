// ConsoleApplication10.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int i, j;
	for (j= 1; j <10; j++) 
	{
		for (i = 1; i <=j; i++);
		{
			cout << i << " * " << j << " = " << i*j;
		}
		cout << endl;
	}
	return 0;
}

