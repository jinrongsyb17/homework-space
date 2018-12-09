#include"client.h"
#include<iostream>
using namespace std;

int CLIENT::number = 20;
void CLIENT::getTime() { cout << "Time:" << time << endl; }
void CLIENT::getAge() { cout << "Age:" << age << endl; }
void CLIENT::getID() { cout << "ID:" << ID << endl; }
void CLIENT::show() {
	cout << "There are only " << number << " available." << endl;
}