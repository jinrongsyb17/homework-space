// 实验二 Computer类.cpp : 定义控制台应用程序的入口点。
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
	CPU(CPU&CPU1){
		cout << "using the copy constructer to construct a CPU" << endl;
	}
	~CPU(){
		cout << "destructing a CPU" << endl;
	}
};

class RAM{
private:
	int ram;
public:
	RAM(int r){
		ram = r;
		cout << "constructing a RAM" << endl;
	}
	RAM(RAM&RAM1){
		cout << "using the copy constructer to construct a RAM" << endl;
	}
	~RAM(){
		cout << "destructing a RAM" << endl;
	}
};

class CDROM{
private:
	int cdrom;
public:
	CDROM(int c){
		cdrom = c;
		cout << "constructing a CDROM" << endl;
	}
	CDROM(CDROM&CDROM1){
		cout << "using the copy constructer to construct a CDROM" << endl;
	}
};

class COMPUTER{
private:
	CPU A;
	RAM B;
	CDROM C;
public:
	COMPUTER(CPU cpu, RAM ram, CDROM cdrom);
	~COMPUTER(){
		cout << "destructing a COMPUTER" << endl;
	}
	void run(){
		cout << "COMPUTER stars operating" << endl;
	}
	void stop(){
		cout << "COMPTER stops operating" << endl;
	}
};

COMPUTER::COMPUTER(CPU cpu, RAM ram, CDROM cdrom) :A(cpu), B(ram), C(cdrom){
	cout << "constructing a COMPUTER" << endl;
}

int main(){
	CPU a(P3, 100, 1.0);
	RAM b(1);
	CDROM c(3);
	COMPUTER Computer(a, b, c);
	Computer.run();
	Computer.stop();
	return 0;
}