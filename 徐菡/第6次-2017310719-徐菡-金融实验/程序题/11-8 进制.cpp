// 11-8 进制.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "please enter an integer:" << endl;
	cin >> n;
	cout << "decimal " << dec << n << endl;
	cout << "octal " << oct << n << endl;
	cout << "hexadecimal " << hex << n << endl;
	return 0;
}