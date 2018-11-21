#include "pch.h"
#include <iostream>
using namespace std;

class Base {
public:
	int fn1() { return 1; }
	int fn2() { return 2; }
};
class Derived :private Base {
public:
	int fn1() { return Base::fn1(); };
	int fn2() { return Base::fn2(); };
};
int main() {
	Derived a;
	a.fn1();
	a.fn2();
	return 0;
}