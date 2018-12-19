// 实验一 CPU类.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include <iostream>
using namespace std;

enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };

class CPU{
private:
	CPU_Rank rank;
	int frequency;
	float voltage;
public:
	CPU(CPU_Rank r, int f, float v){
		rank = r;
		frequency = f;
		voltage = v;
		cout << "constructing a CPU" << endl;
	}
	~CPU(){
		cout << "destructing a CPU" << endl;
	}
	void run(){
		cout << "CPU starts operating" << endl;
	}
	void stop(){
		cout << "CPU stops operating" << endl;
	}
};

int main(){
	CPU a(P3, 100, 1.0);
	a.run();
	a.stop();
	return 0;
}