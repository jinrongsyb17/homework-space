#include<iostream>
using namespace std;

class baseclass {
public:
	void fnl(){
	cout << "baseclass fn1" << endl;
};
		void fn2(){
			cout << "baseclass fn2" << endl;
		};
};

class derivedclass :public baseclass {
public:
	void fn1(){
		cout << "derivedclass fn1"<<endl;
	}
		void fn2(){
			cout << "derivedclass fn2"<<endl;
	}
};

int main(){
	derivedclass d;
	baseclass e;
	derivedclass *p1 = &d;
	baseclass *p2 = &e;
	d.fn1();
	d.fn2();
	p1->fn1();
	p1->fn2();
	p2->fnl();
	p2->fn2();
	system("pause");
	return 0;
}