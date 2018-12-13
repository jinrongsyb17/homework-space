#include"client.h"
#include<iostream>

using namespace std;

int main() {
	CLIENT client1(26, 123456);
	cout << "The client No. " << client1.getNumber() << endl;
	cout << "The client's key is: " << client1.getKey() << endl;
	cout << "The total number of clients is " << CLIENT::totalNumber << endl;

	CLIENT client2(30, 234567);
	CLIENT client3(0,000000);
	cout << "The total number of clients is " << CLIENT::totalNumber << endl;

	system("pause");
	return 0;
}