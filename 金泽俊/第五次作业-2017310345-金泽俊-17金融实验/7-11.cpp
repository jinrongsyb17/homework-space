#include<iostream>
using namespace std;
class BaseClass 
{public:
	virtual int fn1();
	virtual int fn2();
	BaseClass() {};
};
class DerivedClass 
{public:
	int fn1();
	int fn2();
};
int BaseClass::fn1() {
	cout << "Base's fn1" << endl;
	return 0;
}
int BaseClass::fn2() {
	cout << "Base's fn2" << endl;
	return 0;
}
int DerivedClass::fn1(){
cout << "Derived fn1" << endl;
return 0;
}
int DerivedClass::fn2() {
	cout << "Derived fn2" << endl;
	return 0;
}
int main() {
	DerivedClass d;
	BaseClass b;
	BaseClass *p1=&b;
	DerivedClass *p2 = &d;

	b.fn1();
	b.fn2();
	p1->fn1();
	p1->fn2();
	p2->fn1();
	p2->fn2();

	system("pause");
	return 0;

}