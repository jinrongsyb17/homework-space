//cpu.h
#ifndef cpu_h
#define cpu_h
#include<iostream>
using namespace std;
enum CPU_RANK { P1 = 1, P2, P3, P4, P5, P6, P7 };
class CPU {
public:
	CPU() { cout << "constructing cpu" << endl; }
	CPU(enum CPU_RANK rank1, float vol, int freq) :rank(rank1), frequency(freq), voltage(vol) {
		cout << "constructing cpu" << endl;
	};
	~CPU() { cout << "deconstructing cpu" << endl; };
	void run() {};
	void stop() {};
	void show() {
		cout << "The rank is P" << rank << endl;
		cout << "The frequency is " << frequency << "MHz" << endl;
	}
private:
	enum CPU_RANK rank;
	float voltage;
	int frequency;
};
#endif 

//cpu.cpp
#include"cpu.h"
int main() {
	CPU cpu1(P6, 3.2, 57);
	cpu1.show();
	return 0;
}
