#include<iostream>
using namespace std;

class BaseClass {
public:
	BaseClass() {};
	void fn1() {
		cout << "Base:fun1" << endl;
	}
	void fn2() {
		cout << "Base:fun2" << endl;
	}
};

class DerivedClass:public BaseClass {
public:
	DerivedClass(){}
	void fn1() {
		cout << "Derived:fun1" << endl;
	}
	void fn2() {
		cout << "Derived:fun2" << endl;
	}
};

int main() {
	DerivedClass d1;
	d1.fn1();
	d1.fn2();
	BaseClass *b1= new BaseClass();
	DerivedClass *d2=new DerivedClass();
	b1->fn1();
	b1->fn2();
	d2->fn1();
	d2->fn2();
	system("pause");
	return 0;
}