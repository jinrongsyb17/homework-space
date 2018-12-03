// 7-7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class base0 {
public:base0();
};
base0::base0()
{
	cout << "构造基类对象" << endl;
}
class derived :public base0 {
public:derived();

};
derived::derived() {
	cout << "构造派生类对象" << endl;
}
int main()
{
	derived d;
    return 0;
}

