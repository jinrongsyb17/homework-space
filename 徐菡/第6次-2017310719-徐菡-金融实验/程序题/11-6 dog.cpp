// 11-6 dog.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <fstream>
using namespace std;
class Dog{
public:
	Dog(int w, int a) :weight(w), age(a){}
	~Dog(){}
	int getWeight()const {
		return weight;
	}
	int getAge()const{
		return age;
	}
private:
	int weight, age;
};

int main(){
	char fileName[80];
	cout << "Please enter the file name:";
	cin >> fileName;
	ofstream fout(fileName);
	
	Dog dog1(5, 10);
	fout.write((char*)&dog1, sizeof dog1);
	fout.close();

	ifstream fin(fileName);
	
	Dog dog2(1, 1);
	fin.read((char*)&dog2, sizeof dog2);
	cout << dog2.getWeight() << endl;
	cout << dog2.getAge() << endl;
	fin.close();
	return 0;
	}