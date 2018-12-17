#include"client.h"
#include<iostream>
using namespace std;

int main() {
	int ID, age, time;
	cout << "Please enter some information and we will help you make an appointment!" << endl;
	cout << "Please enter your ID number:";
	cin >> ID;
	cout << "Please enter your age:";
	cin >> age;
	cout << "Please enter the time you want to be here:";
	cin >> time;
	CLIENT client(ID, age, time);
	client.show();
	cout << "Your information is here:" << endl;
	client.getID();
	client.getAge();
	client.getTime();
	system("pause");
	return 0;
}

