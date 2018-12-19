#include"client.h"
#include<iostream>

using namespace std;

CLIENT::CLIENT(int inputNo, int inputKey) {
	number = inputNo;
	key = inputKey;
	CLIENT::totalNumber++;
	cout << "An client is built." << endl;
}
int CLIENT::getNumber() {
	return number;
}

int CLIENT::getKey() {
	return key;
}

int CLIENT::totalNumber = 0;