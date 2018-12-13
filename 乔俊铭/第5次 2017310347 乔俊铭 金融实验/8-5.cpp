#include<iostream>
using namespace std;

class mammal {
public:
	virtual void speak() {
		cout << "It's a mammal." << endl;
	};
};
class dog :public mammal {
public:
	void speak() {
		cout << "It's a dog." << endl;
	};	
};

void fun(mammal *ptr) {
	ptr->speak();
};

int main() {
	dog doge;
	mammal animal;
	fun(&doge);
	fun(&animal);
	doge.speak();
	system("pause");
}