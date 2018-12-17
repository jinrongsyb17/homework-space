// Lab3-2.cpp
#include "client.h"
#include <iostream>
using namespace std;

int main()
{
	CLIENT c1(24, 2017311307, 19);
	CLIENT c2(56, 2017310212, 20);
	CLIENT c3(108, 2018243735, 18);
	cout << c1.getid() << endl;
	cout << c2.getage() << endl;
	cout << c2.gettotal() << endl;
	cout << c3.gettotal() << endl;
	c3.show();
	system("pause");
	return 0;
}
