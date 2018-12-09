#include<iostream.h>

class Baseclass{
public:
	Baseclass(){cout<<"constructing Baseclass"<<endl;}
	virtual~Baseclass(){cout<<"destructing Baseclass"<<endl;}
};

class Derivedclass:public Baseclass{
public:
	Derivedclass(){cout<<"constructing Derivedclass"<<endl;}
	~Derivedclass(){cout<<"destructing Deriveclass"<<endl;}
};
void test(Baseclass *x){delete x;}
int main(){
	cout<<"first"<<endl;
	Baseclass *p=new Derivedclass;
	cout<<"test(p)";
	test(p);
	cout<<"end"<<endl;
}
