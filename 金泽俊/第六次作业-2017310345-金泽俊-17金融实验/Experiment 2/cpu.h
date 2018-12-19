#pragma once
#ifndef cpu_h
#define cpu_h
#include<iostream>
using namespace std;
enum CPU_Rank
{P1 = 1, P2, P3, P4, P5, P6, P7};
class CPU {
public:
	CPU();
	~CPU();
	CPU(int a, float b, int c);
	int run();
	int stop();
	void show();
private:
	int frequency;
	float voltage;
	CPU_Rank rank;
};
#endif
