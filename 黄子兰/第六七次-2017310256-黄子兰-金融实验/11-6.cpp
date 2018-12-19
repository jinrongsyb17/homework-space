#include<iostream>
#include<fstream>
using namespace std;
class dog {
public:
	dog() {};
	dog(double wei, int age):weight(wei),age(age) {	}
	void show() {
		cout << "The age of this dog is " <<age<< endl;
		cout << "The weight of this dog is " <<weight<<endl;
	}
private:
	double weight;
	int age;
};

int main() {
	dog dog1(5, 10);
	
	char filename[100];
	cout << "Please enter the file name:";
	cin >> filename;
	cout << "dog1:" << endl;
	dog1.show();
	ofstream fileout(filename);
	if (!fileout) {
		cout << "Unable to open " << filename << endl;
	}
	fileout.write((char*)&dog1, sizeof dog1);
	fileout.close();
	dog dog2(7, 12);
	cout << "dog2:" << endl;
	dog2.show();
	ifstream filein(filename);
	if (!filein) {
		cout << "Unable to open " << filename << endl;
	}
	filein.read((char*)&dog2, sizeof dog2);
	cout << "dog2:" << endl;
	dog2.show();
	filein.close();
	system("pause");
	return 0;

}
