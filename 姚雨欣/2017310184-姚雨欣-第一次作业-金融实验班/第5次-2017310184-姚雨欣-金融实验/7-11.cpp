#include <iostream>
using namespace std;
class baseclass {
public:
	void fun1();
	void fun2();
};

void baseclass::fun1() {
	cout << "现在调用基类的fun1函数" << endl;
}

void baseclass::fun2() {
	cout << "现在调用基类的fun2函数" << endl;
}

class derivedclass :public baseclass {
public:
	void fun1();
	void fun2();
};

void derivedclass::fun1() {
	cout << "现在调用派生类的fun1" << endl;
}

void derivedclass::fun2() {
	cout << "现在调用派生类的fun2" << endl;
}

int main() {
	derivedclass a;
	derivedclass *p1 = &a;
	baseclass *p2 = &a;
	a.fun1();
	a.fun2();
	p1->fun1();
	p1->fun2();
	p2->fun1();
	p2->fun2();
	return 0;
	system("pause");
}