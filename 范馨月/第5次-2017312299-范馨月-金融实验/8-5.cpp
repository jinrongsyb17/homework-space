#include<iostream>
using namespace std;

class Mammal {
public:
	virtual void speak() {
		cout << "Calling Mammal::speak" << endl;
	}
};

class Dog :public Mammal {
public:
	void speak() {
		cout << "Calling Dog::speak" << endl;
	}
};

int main() {
	Dog dog;
	dog.speak();

	system("pause");
	return 0;
}