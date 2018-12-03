#include<iostream>
using namespace std;

class BaseClass {
public:
	void fn1() {
		cout << "Calling BaseClass::fn1()" << endl;
	}
	void fn2() {
		cout << "Calling BaseClass::fn2()" << endl;
	}
};

class DerivedClass: public BaseClass{
public:
	void fn1() {
		cout << "Calling DerivedClass::fn1()" << endl;
	}
	void fn2() {
		cout << "Calling DerivedClass::fn2()" << endl;
	}
};

int main() {
	DerivedClass a;
	DerivedClass *ptr1 = &a;
	BaseClass *ptr2 = &a;
	a.fn1();
	ptr1->fn1();
	ptr2->fn1();
	a.fn2();
	ptr1->fn2();
	ptr2->fn2();
	
	system("pause");
	return 0;
}