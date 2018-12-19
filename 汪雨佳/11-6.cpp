//11-6.cpp
#include<iostream>
#include<fstream>
using namespace std;

class Dog
{
public:
	Dog(int weight,long age):weight(weight),age(age){}
	~Dog(){}
	int getweight()const { return weight; }
	long getage()const { return age; }
private:
	int weight;
	long age;
};

int main()
{
	char filename[80];
	cout << "Please enter the file name:";
	cin >> filename;
	ofstream fileout(filename);
	if (!fileout)
	{
		cout << "unable to open " << filename << "for writing." << endl;
		return 1;
	}

	Dog dog1(5, 10);
	fileout.write((char*)&dog1, sizeof dog1);
	fileout.close();

	Dog dog2(3, 6);
	cout << "dog2 weight: " << dog2.getweight() << endl;
	cout << "dog2 age: " << dog2.getage() << endl;

	ifstream filein(filename);
	if (!filein)
	{
		cout << "unable to open " << filename << "for reading" << endl;
		return 1;
	}

	filein.read((char*)&dog2, sizeof dog2);

	cout << "dog2 weight: " << dog2.getweight() << endl;
	cout << "dog2 age: " << dog2.getage() << endl;
	filein.close();
	system("pause");
	return 0;
}


