#include<iostream>
using namespace std;
class BaseClass
{public:
	BaseClass() { cout << "Base's constructor." << endl; };
	virtual ~BaseClass() { cout << "Base's destructor." << endl; }
};
class DerivedClass: public BaseClass{
public:
	DerivedClass() { cout << "Derived's constructor." << endl; };
	~DerivedClass() {cout << "Derived's destructor." << endl; };
};
int main()
{BaseClass *p=new DerivedClass;
delete p;

return 0;
}
