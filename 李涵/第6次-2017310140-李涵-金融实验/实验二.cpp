// ConsoleApplication6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };
class CPU {
public:
	CPU(CPU_Rank r, float vol, int fre)
	{
		rank = r;
		voltage = vol;
		frequency = fre;
		cout << "调用CPU构造函数" << endl;
	};
	~CPU() { cout << "调用CPU析构函数" << endl; };
	CPU_Rank getrank() const { return rank; };
	float getvol() const { return voltage; };
	int getfre() const { return frequency; };
	void setrank(CPU_Rank r) { rank = r; };
	void setvol(float vol) { voltage = vol; };
	void setfre(int fre) { frequency = fre; };
	void run() { cout << "运行CPU" << endl; };
	void stop() { cout << "停止CPU" << endl; };
private:
	CPU_Rank rank;
	float voltage;
	int frequency;
};
class RAM {
public:
	RAM(int x) {
		cout << "调用RAM构造函数" << endl;
	};
	~RAM() { cout << "调用RAM析构函数" << endl; };
private:
	int x;
};
class CDROM {
public:
	CDROM(int y) {
		cout << "调用CDROM构造函数" << endl;
	};
	~CDROM() { cout << "调用CDROM析构函数" << endl; };
private:
	int y;
};
class Computer {
public:
	Computer(CPU_Rank r,float v,int f,int x,char y):cpu(r,v,f),ram(x),cdrom(y)
	{
		cout << "调用Computer构造函数" << endl;
	};
	~Computer() { cout << "调用Computer的析构函数" << endl; };
	void run() { cout << "运行Computer" << endl; };
	void stop() { cout << "停止Computer" << endl; };
private:
	CPU cpu;
	RAM ram;
	CDROM cdrom;
};
int main() {
	Computer computer(P3, 2.8, 300, 4, 'G');
	computer.run();
	computer.stop();
}