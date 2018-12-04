#include<iostream>
using namespace std;

class Mammal {
public:
	Mammal() {}
	virtual void speak() {
		cout << "Mammal:speak" << endl;
	}
};

class Dog:public Mammal {
public:
	Dog() {};
	void speak() {
		cout << "wang,wang,wang!" << endl;
	}
};

int main() {
	Dog dog;
	dog.speak();
	system("pause");
	return 0;
}