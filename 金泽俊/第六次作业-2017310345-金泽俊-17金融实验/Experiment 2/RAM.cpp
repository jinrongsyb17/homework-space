#include"RAM.h"
#include<iostream>
using namespace std;
RAM::RAM() 
{
	speed = static_cast<RAM_speed>(1);
	size = 16;
}
RAM::RAM(int a, int b) 
{
	speed = static_cast<RAM_speed>(a);
	size = b;
}
void RAM::show() 
{
	cout << "RAM's speed" << " " << speed << endl;
	cout << "RAM's size" << " " << size << endl;
};
