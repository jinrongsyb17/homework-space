#include<iostream>
using namespace std;

class BaseClass {
public:void fn1() { cout << "baseclass::fn1()" << endl; }
	   void fn2() { cout << "baseclass::fn2()" << endl; }
};
class DerivedClass :public BaseClass {
public:void fn1() { cout << "derivedclass::fn1()" << endl; }
	   void fn2() { cout << "derivedclass::fn2()" << endl; }
};
int main() {
	DerivedClass a;
	BaseClass*b = &a;
	DerivedClass*c = &a;
	a.fn1();
	a.fn2();
	b->fn1();
	b->fn2();
	c->fn1();
	c->fn2();
	system("pause");
	return 0;
}