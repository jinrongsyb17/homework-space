#include<iostream>
using namespace std;
class BaseClass{
	public:
		void fn1();
		void fn2();
};
void BaseClass::fn1(){
}
void BaseClass::fn2(){
}
class DerivedClass:public BaseClass{
	public:
		void fn1();
		void fn2();
};
void DerivedClass::fn1(){
}
void DerivedClass::fn2(){
}
int main(){
	DerivedClass x;
	DerivedClass* y=&x;
	BaseClass* z=&x;
	x.fn1();
	x.fn2();
	y->fn1();
	y->fn2();
	z->fn1();
	z->fn2();
	return 0;
}
