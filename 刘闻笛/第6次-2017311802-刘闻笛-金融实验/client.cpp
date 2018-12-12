//client.cpp
#include "client.h"
#include "stdafx.h"
#include<iostream>
#include<cstdlib>
using namespace std;

int CLIENT::total = 0;
CLIENT::CLIENT(int id, int age) :id(id), age(age) {
	cout << " #" << id << " is created" << endl;
	total++;
}

int CLIENT::getid() const { return id; }
int CLIENT::getage() const { return age; }
int CLIENT::gettotal() { return total; }

void CLIENT::show() const {
	cout << "id#" << id << " age:" << age << endl;
}
