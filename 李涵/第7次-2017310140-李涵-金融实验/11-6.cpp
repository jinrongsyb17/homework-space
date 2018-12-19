// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;
class Dog {
public:
	Dog(int weight, int age):WEIGHT(weight),AGE(age){};
	~Dog() {};
	int Weight()const { return WEIGHT; }
	void ShowWeight(int weight) { WEIGHT = weight; };
	int Age()const { return AGE; };
	void ShowAge(int age) { AGE = age; };
private:
	int WEIGHT;
	int AGE;
};
int main() {
	char filename[50];
	cout << "Please enter the file name:" << endl;
	cin >> filename;
	ofstream found(filename);
	if (!found) {
		cout << "Unable to find " << filename << endl;
		return(1);
	};
	Dog dog1(5, 10);
	found.write((char*)&dog1, sizeof dog1);
	found.close();
	ifstream find(filename);
	if (!find) {
		cout << "Unable to find " << filename << endl;
		return(1);
	};
	Dog dog2(4, 7);
	cout << "dog2 weight" << dog2.Weight() << endl;
	cout << "dog2 age" << dog2.Age() << endl;
	find.read((char*)&dog2, sizeof dog2);
	cout << "dog2 weight" << dog2.Weight() << endl;
	cout << "dog2 age" << dog2.Age() << endl;
	find.close();
	return 0;
};