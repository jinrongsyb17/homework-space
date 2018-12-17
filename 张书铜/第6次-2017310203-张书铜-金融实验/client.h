#include<iostream>
#ifndef client_h
#define client_h

class client {
public:
	client();
	~client();
	static void Changeservername(char s);
	static void showServername();
	static void showClientnum();
private:
	static char Servername;
	static int Clientnum;
};

#endif
