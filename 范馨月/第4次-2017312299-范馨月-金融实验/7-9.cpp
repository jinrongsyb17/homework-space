#include<iostream>
using namespace std;

class Base {
public:
	void fn1() {
		cout << "Calling fn1()" << endl;
	}
	void fn2() {}
};

class Derived:private Base {
public:
	void fn1() {
		this->fn1();
	}
};

int main() {
	Derived a;
	a.fn1();
	system("pause");
	return 0;
}