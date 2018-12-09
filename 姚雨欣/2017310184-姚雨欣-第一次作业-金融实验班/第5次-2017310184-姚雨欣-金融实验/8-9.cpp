#include <iostream>
using namespace std;

class base {
public:
	virtual~base() {
		cout << "调用了基类的析构函数" << endl;
	}
};

class derived :public base {
public:
	~derived() {
		cout << "调用了派生类的析构函数" << endl;
	}
};

int main() {
	base *p = new derived;
	delete p;
	return 0;
}