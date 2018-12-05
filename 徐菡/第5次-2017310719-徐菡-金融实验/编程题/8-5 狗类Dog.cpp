// 8-5 狗类Dog.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Mammal{
public:
	virtual void speak ()const=0;
};

class Dog:public Mammal{
public:
	void speak() const;
};

void Dog::speak() const{
	cout << "Dog::speak" << " " << "ao" << endl;
}

	int main(){
		Dog doggy;
		doggy.speak();
		return 0;
	}

