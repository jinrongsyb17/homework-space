#include<iostream>
using namespace std;

class Mammal {
public:
	Mammal() {
		cout << "Mammal constructor\n";
	}
	virtual ~Mammal()
	{
		cout << "Mammal destructor\n";
	}
	virtual void speak() const {
		cout << "Mammal speak!\n";
	}
};

class Dog :public Mammal {
public:
	Dog() {
		cout << "Dog constructor\n";
	}
    ~Dog() {
		cout << "Dog destructor\n";
	}
	virtual void speak() const {
		cout << "Dog speak!\n";
	}
};

int main() {
	Dog d;
	Mammal * m = &d;
	m->speak();
	delete m;
	return 0;
}