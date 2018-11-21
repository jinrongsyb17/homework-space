#include <iostream>
using namespace std;

class Base {
public:
	Base();
};

Base::Base() {
	cout << "构造基类对象喽" << endl;
}

class Derived :public Base {
public:
	Derived();
};

Derived::Derived() {
	cout << "构造派生类对象啦" << endl;
}

int main() {
	Derived d;
	return 0;
}