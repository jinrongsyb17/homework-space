//client.h
#include<iostream>
#ifndef client_h
#define client_h 
class client
{
public:
	client() {};
	client(int i);
	client operator + (client &c);
	client(client & c);
	client operator++(int);
	void show();
private:
	static int count;
	int i;
};
#endif

//client.cpp
#include "client.h"
using namespace std;
int client::count = 0;
void client::show() {
	cout << i << endl;
}
client client::operator++(int) {
	i++;
	return client(i);
}
client client::operator +(client &c) {
	count += c.i;
	return client(i + c.i);
};
client::client(int i) :i(i) {
	count += i;
};
client::client(client &c) :i(i) {
	count += i;
	cout << "CopyConsturctor" << endl;
};
int main() {
	client a1(5), a2(7), a3, a4;
	cout << "a1=";
	a1.show();
	cout << "a2=";
	a2.show();
	a3 = a1 + a2;
	a4 = a2++;
	cout << "a1+a2=";
	a3.show();
	cout << "a2+1=";
	a4.show();
	return 0;
}
