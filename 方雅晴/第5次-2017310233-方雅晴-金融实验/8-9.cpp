#include<iostream>
using namespace std;

class baseclass{
public:
	baseclass(){
		cout<<"construct base"<<endl;
	}
	virtual ~baseclass(){
		cout<<"destruct base"<<endl;
	}
}; 

class derivedclass:public baseclass{
	public:
	derivedclass(){
		cout<<"construct derived"<<endl;
	}
	~derivedclass(){
		cout<<"destruct derived"<<endl;
	}
};

int main(){
	baseclass *p=new derivedclass;
	delete p;
	return 0;
}
