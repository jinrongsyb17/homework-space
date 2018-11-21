// 7-9调用基类函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Base{
public:
	Base(){};
	void fn1(){
		cout << "member fn1" << endl;
	}
	void fn2(){
		cout << "member fn2" << endl;
	}
};

class Derived:private Base{
public:
	Derived():Base(){};
	void getfn1(){
		return Base::fn1();
	}
};

int main()
{
	Derived x;
	Derived *y = &x;
	y->getfn1();
	return 0;
}

