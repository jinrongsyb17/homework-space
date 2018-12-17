#pragma once
#include<iostream>
#ifndef RAM_H
#define RAM_H
enum RAM_speed 
{X1 = 1, X2, X4, X8, X16};

class RAM {
public:
	RAM();
	RAM(int a, int b);
	void show();
private:
	RAM_speed speed;
	int size;
};
#endif
