// ConsoleApplication7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main() {
	int i = 2, k = 2;
	do {
		do{
			if (i == k);
			cout << i << "是质数" << " ";
			k++;
		}
		while (i%k != 0 && i >= k);
		i++, k = 2;
	}
	while (i <= 100);
	return 0;
}
