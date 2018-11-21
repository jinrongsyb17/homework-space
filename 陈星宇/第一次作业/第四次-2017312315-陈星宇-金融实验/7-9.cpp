#include<iostream>
using namespace std;

class Base {
public:
	int fn1() const {
		return 1;
	}
	int fn2() const {
		return2;
	}
};

class Derived :private Base {
public:
	int fn1() {
		return Base::fn1();
	}
	int fn2() {
		return Base::fn2();
	}
};

int main() {
	Derived d;
	d.fn1();
	return 0;
}