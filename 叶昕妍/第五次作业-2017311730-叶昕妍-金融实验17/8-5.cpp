#include <iostream>
using namespace std;

class Mammal {
public:Mammal() { cout << "mammal constructor"<<endl; }
	   virtual~Mammal() { cout << "mammal destructor"<<endl; }
	   virtual void speak() { cout << "mammal speak"<<endl; }
};
class Dog :public Mammal {
public:Dog() { cout << "dog constructor"<<endl; }
	   ~Dog() { cout << "dog destructor"<<endl; }
	   virtual void speak() { cout << "dog speak"<<endl; }
};
int main() {
	Mammal*a = new Dog;
	a->speak();
	delete a;
	system("pause");
	return 0;
}