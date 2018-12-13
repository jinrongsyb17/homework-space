#include<iostream>
using namespace std;

class mammal {
	public:
		mammal(){
		cout<<"construct mammal"<<endl;
		}
		virtual void speak()const{
			cout<<"this is mammal"<<endl;
		}
	   virtual~mammal(){
		cout<<"destruct mammal"<<endl;
		}
};

class dog:public mammal{
	public:
	dog(){
		cout<<"construct dog"<<endl;
	}
	void speak()const{
	cout<<"this is dog"<<endl;
	}
	~dog(){
		cout<<"destruct dog"<<endl;
	}
};

int main(){
	mammal *p=new dog;
	p->speak();
	delete p;
	return 0;
}
