// 7-11.cpp

#include "pch.h"
#include<iostream>
using namespace std;

class BaseClass {
public:
	void fn1() { cout << "调用基类函数fn1" << endl; }
	void fn2​() { cout << "调用基类函数fn2" << endl; }
};

class ​​DerivedClass : public BaseClass{
public:
	void fn1() { cout << "调用派生类函数fn1" << endl; }
	void fn2​() { cout << "调用派生类函数fn2" << endl; }
};

int main(){
	DerivedClass a;
	DerivedClass * aa = & a;
	BaseClass * bb = &a;
	a.fn1();
	a.fn2();
	aa->fn1();
	aa->fn2();
	bb->fn1();
	bb->fn2();
	return 0;
}