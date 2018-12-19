// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<fstream>
using namespace std;

class Dog {
public:
	Dog(float weight, int age) :weight(weight), age(age) {};
	double get_weight() {
		return weight;
	}
	int get_age() {
		return age;
	}
private:
	float weight;
	int age;
};

int main() {
	ofstream file1("dog.txt", ios::binary);
	//ofstream file1("dog.txt");
	Dog dog1(5.0,10);
	file1.write((char*)&dog1, sizeof dog1);
	file1.close();
	Dog dog2(2.0,20);
	ifstream file2("dog.txt", ios::binary);
	//ifstream file2("dog.txt")
	file2.read((char*)&dog2, sizeof dog2);
	cout << dog2.get_age() << endl << dog2.get_weight() << endl;
	return 0;
}

