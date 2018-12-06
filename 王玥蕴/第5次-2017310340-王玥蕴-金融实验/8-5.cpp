#include<iostream>
using namespace std;

class Mammal
{
public:
	Mammal() { cout << "Mammal" << endl; }
	virtual void speak() {}
	virtual ~Mammal()
	{
		cout << "~Mammal::speak()" << endl;
	}
};


class Dog :public Mammal
{
public:
	Dog() { cout << "Dog" << endl; }
	virtual void speak()
	{
		cout << "Dog::speak" << endl;
	}
	~Dog()
	{
		cout << "~Dog::speak()" << endl;
	}
};


void main()
{
	Mammal *p;
	p = new Dog;
	p->speak();
	//(*p).speak();
	delete p;
	p = NULL;
}

