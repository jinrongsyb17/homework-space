//Client.h
#include<iostream>
#ifndef Client_h
#define Client_h 
class client 
{public :
	client(int i) ;
	client operator + (client &c);
	client(client & c);
	client operator++(int);
	void show();
private:
	static int count;
	int i;
};
#endif
