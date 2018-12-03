// ConsoleApplication4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class base {
public: 
	base();
};
base::base(){
	cout << "构造基类对象" << endl;
};
class derived:public base{
public:
	derived();
};
derived::derived() {
	cout << "构造派生类对象" << endl;
}
int main() {
	derived a;
	return 0;
}