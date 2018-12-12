#include "pch.h"
#include <iostream>
using namespace std;

class Baseclass {
public:
	virtual ~Baseclass() {
		cout << "Baseclass destructor..." << endl;
	}
};
class Derived:public Baseclass{
public:
	~Derived() {
		cout << "Derived destructor..." << endl;
	}
};
int main() {
	Baseclass *p = new Derived;
	delete p;
	return 0;
}