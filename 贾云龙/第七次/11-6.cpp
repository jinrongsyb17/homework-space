#include<iostream>
#include<fstream>
using namespace std;
class dog {
public:
	dog(int weight,int days):w(weight),d(days){}
	int getweight() {
		return w;
	};
	int getdays() {
		return d;
	}
	~dog(){}
private:
	int w;
	int d;
};
int main() {
	ofstream file1("dog", ios::binary);
	dog dog1(5, 10);
	file1.write((char*)&dog1, sizeof dog1);
	file1.close();
	dog dog2(2, 20);
	ifstream file2("dog.txt", ios::binary);
	file2.read((char*)&dog2, sizeof dog2);
	cout << dog2.getdays() << endl << dog2.getweight() << endl;
	system("pause");
	return 0;

}