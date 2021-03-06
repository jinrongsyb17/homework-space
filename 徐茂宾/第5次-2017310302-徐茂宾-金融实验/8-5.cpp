// 8-5.cpp 

#include "pch.h"
#include<iostream>
using namespace std;

class Mammal {
public:
	Mammal() { cout << "调用基类构造函数Mammal" << endl; }
	~Mammal() { cout << "调用基类析构函数Mammal" << endl; }
	virtual void speak() { cout << "调用基类函数speak" << endl; }
};

class Dog :public Mammal {
public:
	Dog() { cout << "调用派生类构造函数Dog" << endl; }
	~Dog() { cout << "调用派生类析构函数Dog" << endl; }
	void speak(){ cout << "调用派生类函数speak" << endl; }
};

int main()
{
	Mammal *Dog1 = new Dog;
	Dog1->speak();
	delete Dog1;
	return 0;
}