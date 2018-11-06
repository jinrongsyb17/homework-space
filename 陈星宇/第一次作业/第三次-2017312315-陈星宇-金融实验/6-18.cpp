#include <iostream>
using namespace std;

int * fn1();
int main() {
	int * a = fn1();
	cout << "the value of a is: " << *a;
	delete a;
	return 0;
}

int * fn1() {
	int * p = new int(5);
	return p;
}
