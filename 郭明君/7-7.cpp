// 7-7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Base 
{
public:
	Base();
};

Base::Base() 
{
	cout << "构造基类对象" << endl;
}

class Derived :public Base 
{
public:
	Derived();
};

Derived::Derived() {
	cout << "构造派生类对象" << endl;
}

int main() {
	Derived d;
	return 0;
}
