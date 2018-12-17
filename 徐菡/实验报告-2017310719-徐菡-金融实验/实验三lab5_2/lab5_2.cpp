//lab5_2.cpp

#include "client.h"
#include<iostream>
using namespace std;

int main(){
	CLIENT X(2017310718);
	CLIENT Y(2017310719);
	cout << "X" << ":" << X.GetID() << endl;
	cout << "Y" << ":" << Y.GetID() << endl;
	return 0;
}