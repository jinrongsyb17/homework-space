#include<iostream>
using namespace std;

class Base {
public:
	Base(int i) {
		cout << "constructng Base " << i << endl;
	}
};

class Derived :public Base {
public:
	Derived(int a, int b) :Base(b),base(a) {

	}
private:
	Base base;
};

int main() {
	Derived(1, 2);
	system("pause");
	return 0;
}