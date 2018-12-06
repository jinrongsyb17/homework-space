#include<iostream>
using namespace std;

class baseclass{
	public:
		void fn1(){	cout<<"base::fn1()"<<endl;	}
		void fn2(){	cout<<"base::fn2()"<<endl;	}
		
	
}; 

class derivedclass:public baseclass{
	public:
		void fn1(){	cout<<"derived::fn1()"<<endl;	}
		void fn2(){	cout<<"derived::fn2()"<<endl;	}
	
};

int main(){
	derivedclass d;
	derivedclass *p1=&d;
	baseclass *p2=&d;
	p1->fn1();
	p1->fn2();
	p2->fn1();
	p2->fn2();
	return 0;	
}
