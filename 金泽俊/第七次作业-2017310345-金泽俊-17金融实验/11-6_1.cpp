#include<iostream>
#include<fstream>
#include<random>
using namespace std;
class dog 
{
public:
	dog(int a, int b) :weight(a), age(b) {};
	dog() :weight(0), age(0) {};
	void display(ostream &out) 
	{ out << this->weight << "  " << this->age; }
	void show() { cout << weight << " " << age << endl; }
	dog(dog &b) { this->weight = b.weight; this->age = b.age; }
private:
	int weight, age;
};
ofstream & operator<< (ofstream &out, dog &d) 
{ d.display(out); out << endl; return out; }
int main() 
{
	dog a(5, 10);
	dog b;

	ofstream output("dog.txt", ios_base::binary | ios_base::out);
	if (!output) { cout << "Failed to open File One." << endl; exit(1); }
	output.write((char*)&a,sizeof(dog));
	output.close();

	ifstream input("dog.txt", ios_base::binary);
	input.seekg(0, ios_base::beg);
	input.read((char*)&b, sizeof(dog));
	b.show();
	input.close();

	system("pause");
	return 0;
}