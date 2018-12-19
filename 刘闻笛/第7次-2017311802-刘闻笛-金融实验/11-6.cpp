// 11-6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
using namespace std;
class Dog {
public:
	Dog(int weight, long days) :
		itsWeight(weight), itsDays(days) {}
	~Dog() {}
	int getWeight()const { return itsWeight; }
	void setWeight(int weight) { itsWeight = weight; }
	long getDays()const { return itsDays; }
	void setDays(long days) { itsDays = days; }
private:
	int itsWeight;
	long itsDays;
};

int main()
{
	char fileName[80];
	cout << "Please enter the file name:";
	cin >> fileName;
	ofstream fout(fileName);
	if (!fout) {
		cout << "Unable to open" << fileName << "for writing.\n";
		return (1);
	}
	Dog dog1(5, 10);
	fout.write((char*)&dog1, sizeof dog1);
	fout.close();
	ifstream fin(fileName);
	if (!fin) {
		cout << "Unable to open" << fileName << "for reading.\n";
		return(1);
	}
	Dog dog2(6, 12);
	cout << "dog2 weight:" << dog2.getWeight() << endl;
	cout << "dog2 days:" << dog2.getDays() << endl;
	fin.read((char*)&dog2, sizeof dog2);
	cout << "dog2 weight:" << dog2.getWeight() << endl;
	cout << "dog2 days:" << dog2.getDays() << endl;
	fin.close();

    return 0;
}

