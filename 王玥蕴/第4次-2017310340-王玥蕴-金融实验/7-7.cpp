#include <iostream>
using namespace std;
class A
{
public:
	A()
	{
		cout << "A(Based Class) constructor is called" << endl;
	}
	~A()
	{
		cout << "A(Based Class) destructor is called" << endl;
	}
};
class B :public A
{
public:
	B()
	{
		cout << "B(Derived Class) constructor is called" << endl;
	}
	~B()
	{
		cout << "B(Derived Class) destructor is called" << endl;
	}
};
int main()
{
	B b1;
	return 0;
}


