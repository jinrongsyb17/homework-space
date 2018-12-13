#include<iostream>
using namespace std;
class Mammal{
	public:
		Mammal(){
		}
		virtual~Mammal(){
		}
		virtual void speak()const{}
};
class Dog:public Mammal{
	public:
		Dog(){
		}
		~Dog(){
		}
		void speak()const{}
};
int main(){
	Mammal* jack=new Dog;
	jack->speak();
	delete jack;
	return 0; 
}
