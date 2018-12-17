#include<iostream>
using namespace std;
class Mammal
{public:
	Mammal() {};
	virtual void speak() { cout << "Mammal is speaking." << ends;}
private:};
class Dog : public Mammal
{
public:
	void speak() { cout << "Barking " << endl; }
	Dog() {};
};
int main()
{
	Dog d;
	d.speak();

	return 0;
}
