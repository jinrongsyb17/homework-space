#include<iostream>
using namespace std;

class BaseClass {
public:
	virtual ~BaseClass() {
		cout << "Destruction BaseClass" << endl;
	}
};

class DerivedClass :public BaseClass {
public:
	~DerivedClass() {
		cout << "Destruction DerivedClass" << endl;
	}
};

int main() {
	BaseClass *p = new DerivedClass;
	delete p;
	return 0;
}