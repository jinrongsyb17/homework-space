#include<iostream>
#include"client.h"
using namespace std;

int CLIENT::count = 1;
void CLIENT::showCount() {
	cout << "Object count=" << count << endl;
}