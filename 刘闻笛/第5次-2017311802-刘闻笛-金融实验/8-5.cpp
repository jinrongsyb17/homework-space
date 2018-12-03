// 8-5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Mammal {
public:
	Mammal() {
		cout << "Mammal constructor..."<<endl;
	}
	virtual~Mammal() {
		cout << "Mammal destructor...\n";
	}
	virtual void speak()const{
		cout << "Mammal speak!\n";
	}
};
class Dog :public Mammal {
public:
	Dog() {
		cout << "Dog constructor...\n";
	}
	~Dog() {
		cout << "Dog destructor...\n";
	}
	void speak()const {
		cout << "Woof!\n";
	}
};

int main()
{
	Mammal*pDog = new Dog;
	pDog->speak();
	delete pDog;

    return 0;
}

