#include<iostream>
using namespace std;

class BaseClass {
public:
	BaseClass() {
		cout << "Construct BaseClass" << endl;
	}
	virtual ~BaseClass() {
		cout << "Deconstruct BaseClass" << endl;
	}
};

class DerivedClass :public BaseClass {
public:
	DerivedClass() {
		cout << "Construct DerivedClass" << endl;
	}
	~DerivedClass() {
		cout << "Deconstruct DerivedClass" << endl;
	}
};
int main() {
	BaseClass *ptr = new DerivedClass;
	delete ptr;

	system("pause");
	return 0;
}