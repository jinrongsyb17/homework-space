// 8-9.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

class BaseClass {
public:
	virtual ~BaseClass() { cout<<"Base的析构函数"<<endl; }
};
class DerivedClass:public BaseClass {
public:
	virtual ~DerivedClass() { cout<<"Derived的析构函数"<<endl; }
};

int main() {
	BaseClass *b = new DerivedClass;
	b->~BaseClass();
	return 0;
}