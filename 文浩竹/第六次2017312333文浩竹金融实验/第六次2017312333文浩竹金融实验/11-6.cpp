#include<iostream>
#include<fstream>

using namespace std;

class Dog {
private:
	double weight;
	int age;
public:
	Dog() {};
	Dog(double nWeight, int nAge) :age(nAge), weight(nWeight) {};
	int getAge() { return age; };
	double getWeight() { return weight; };
	void setAge(int nAge) { age = nAge; };
	void setWeight(double nWeight) { weight = nWeight; };
};

int main() {
	Dog dog(5, 10);
	
	ofstream ofile1("dog_file1.txt");
	ofile1.write((char*)&dog, sizeof(dog));
	ofile1.close();
	ifstream ifile1("dog_file1.txt");
	Dog dog1(1, 2);
	cout << "dog1 weight:" << dog1.getWeight() << endl;
	cout << "dog1 age:" << dog1.getAge() << endl;
	ifile1.read((char*)&dog1, sizeof(dog1));
	cout << "dog1 weight:" << dog1.getWeight() << endl;
	cout << "dog1 age:" << dog1.getAge() << endl;
	ifile1.close();
	
	ofstream ofile2("dog_file2.txt", ios_base::binary);
	ofile2.write((char*)&dog, sizeof(dog));
	ofile2.close();
	ifstream ifile2("dog_file2.txt", ios_base::binary);
	Dog dog2(1, 2);
	cout << "dog2 weight:" << dog2.getWeight() << endl;
	cout << "dog2 age:" << dog2.getAge() << endl;
	ifile2.read((char*)&dog2, sizeof(dog2));
	cout << "dog2 weight:" << dog2.getWeight() << endl;
	cout << "dog2 age:" << dog2.getAge() << endl;
	ifile2.close();
	return 0;
}