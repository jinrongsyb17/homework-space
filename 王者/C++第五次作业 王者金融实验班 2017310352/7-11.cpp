#include<iostream.h>

class Baseclass{
public:
	fun1(){cout<<"the first one"<<endl;}
	fun2(){cout<<"the second one"<<endl;}
}
class Derivedclass:public Baseclass{
public:
	fun1(){cout<<"the first D one"<<endl;}
	fun2(){cout<<"the second  D one"<<endl;}
}

int main(){
	Derivedclass p;
	Baseclass *m;
	Derviedclass *n;
	p.fun1();
	*m->fun1();
	*n->fun2();
	return 0;
}


