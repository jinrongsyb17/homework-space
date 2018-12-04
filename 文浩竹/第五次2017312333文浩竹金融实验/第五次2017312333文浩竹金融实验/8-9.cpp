#include<iostream>
using namespace std;

class BaseClass {
public:
	BaseClass() {
		cout << "Base constructor." << endl;
	}
	virtual ~BaseClass() {
		cout << "Base destructor." << endl;
	}
};
class DerivedClass :public BaseClass  {
public:
	DerivedClass() {
		cout << "Derived constructor." << endl;
	}
	virtual ~DerivedClass() {
		cout << "Derived destructor." << endl;
	}
};

int main() {
	DerivedClass d;
	BaseClass *b = &d;
	delete b;
	system("pause");
	return 0;
}