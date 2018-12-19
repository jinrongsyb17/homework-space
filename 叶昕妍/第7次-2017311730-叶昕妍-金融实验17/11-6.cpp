#include <iostream>
#include<fstream> 
using namespace std;

class Dog {
public:
	Dog(int weight, long age) :
		Weight(weight), Age(age) {}
	~Dog() {}
	int getWeight()const {
		return Weight;
	}
	void setWeight(int weight) {
		Weight = weight;
	}
	long getAge()const{
		return Age;
	}
	void setAge(long age) {
		Age = age;
	}
private:
	int Weight;
	long Age;
};

int main() {
	char filename[80];
	cout << "Please enter the file name:";
	cin >> filename;
	ofstream fout(filename);
	if (!fout) {
		cout << "unable to open" << filename << "for writing." << endl;
		return(1);
	}
	Dog dog1(1, 2);
	fout.write((char*)&dog1, sizeof dog1);
	fout.close();
	ifstream fin(filename);
	if (!fin) {
		cout << "unable to open" << filename << "for reading.\n";
		return(1);
	}

	Dog dog2(3, 4);
	cout << "dog2 weight:" << dog2.getWeight() << endl;
	cout << "dog2 age:" << dog2.getAge() << endl;

	fin.read((char*)&dog2, sizeof dog2);
	cout << "dog2 weight:" << dog2.getWeight() << endl;
	cout << "dog2 age:" << dog2.getAge() << endl;
	fin.close();
	system("pause");
	return 0;
}
