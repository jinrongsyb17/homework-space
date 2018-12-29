// 实验三（2）lab5-2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include"client.h"
using namespace std;

int main() {
	CLIENT client(18, 180.5);
	cout << "The client's age is " << client.getage() << endl;
	cout << "The client's height is " << client.getheight() << endl;
	CLIENT::showCount();
	system("pause");
	return 0;
}