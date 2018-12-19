// 实验二.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };
class CPU {
public:
	CPU() { cout << "调用CPU默认构造函数" << endl; }
	CPU(CPU_Rank rank, int frequency, float voltage);
	void run();
	void stop();
	~CPU() { cout << "调用CPU析构函数" << endl; };
private:
	CPU_Rank rank;
	int frequency;
	float voltage;

};
CPU::CPU(CPU_Rank rank, int frequency, float voltage)
{
	cout << "调用CPU的构造函数" << endl;
	cout << "rank:" << rank << endl;
	cout << "frequency:" << frequency << "MHz" << endl;
	cout << "voltage:" << voltage << "V" << endl;

}
void CPU::run() { cout << "run函数" << endl; }
void CPU::stop() { cout << "stop函数" << endl; }

class RAM {
public:
	RAM() { cout << "调用RAM构造函数" << endl; }
	~RAM() { cout << "调用RAM析构函数" << endl; }
};
class CDROM {
public:
	CDROM() { cout << "调用CDROM构造函数" << endl; }
	~CDROM() { cout << "调用CDROM析构函数" << endl; }
};
class COMPUTER {
public:
	COMPUTER(CPU cpu, RAM ram, CDROM cdrom);
	void run() { cout << "COMPUTER::run" << endl; }
	void stop() { cout << "COMPUTER::stop" << endl; }
	~COMPUTER() { cout << "调用COMPUTER析构函数" << endl; }
private:
	CPU cpu;
	RAM ram;
	CDROM cdrom;
};
COMPUTER::COMPUTER(CPU cpu, RAM ram, CDROM cdrom) :cpu(), ram(), cdrom() {
	 cout << "调用COMPUTER构造函数" << endl; 
}
int main()
{
	CPU cpu(P5,50,2.5);
	RAM ram;
	CDROM cdrom;

	cout << "创建computer对象" << endl;
	COMPUTER computer(cpu,ram,cdrom);
	computer.run();
	computer.stop();
    return 0;
}

