#include<iostream>
#include<fstream>
using namespace std;

class Dog {
public:
	Dog(int a, double w) :age(a), weight(w) {}
	int getAge() { return age; }
	double getWeight() { return weight; }
private:
	int age;
	double weight;
};

int main() {
	char filename[100];
	cout << "Please enter the file name: " << endl;
	cin >> filename;
	ofstream file1(filename);
	Dog dog1(10, 5);
	file1.write((char*)&dog1, sizeof (dog1));
	file1.close();

	ifstream file2(filename);
	Dog dog2(1, 1);
	cout << "dog2 age:" << dog2.getAge() << "\tdog2 weight:" << dog2.getWeight() << endl;
	file2.read((char*)&dog2, sizeof (dog2));
	cout << "dog2 age:" << dog2.getAge() << "\tdog2 weight:" << dog2.getWeight() << endl;
	file2.close();

	return 0;
}