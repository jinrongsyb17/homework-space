#include "Client.h"
using namespace std;
int client::count = 0;
void client::show() {
	cout<<i<<ends; }
client client::operator++(int){
	i++;
	return *this;}
client client::operator +(client &c){
	count += c.i;
	return client (i+c.i);};
client::client(int i):i(i) { 
	count += i; };
client::client(client &c) :i(i) { 
	count += i; 
	cout << "CopyConsturctor" << endl; };

