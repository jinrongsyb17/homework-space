// 实验二.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

enum CPU_RANK { P1 = 1, P2, P3 = 5, P4, P5 };//union是每个数据公用内存；struct和enum不共用内存，而是每个都会占用内存。union和enum每次只能出现一次，而struct可以同时出现许多值
//若给了P1=1，则往后都默认加一。除非自己赋值了
class CPU {
public:
	CPU() {
		cout << "CPU的构造函数1" << endl;
	}
	CPU(CPU_RANK rank, int frequency, float voltage) {
		this->rank = rank;
		this->frequency = frequency;
		this->voltage = voltage;
		cout << rank << endl;
		cout << frequency << endl;
		cout << voltage << endl;
		cout << "CPU的构造函数2" << endl;
	}

	void run();
	void stop();
	~CPU() { cout << "CPU的析构函数" << endl; }

private:
	CPU_RANK rank;
	int frequency;
	float voltage;
};

void CPU::run() { cout << "CPU:run函数" << endl; }
void CPU::stop() { cout << "CPU:stop函数" << endl; }

class RAM {
public:
	RAM() { cout << "RAM的构造函数" << endl; }
	~RAM() { cout << "RAM的析构函数" << endl; }
};

class Cdrom {
public:
	Cdrom() { cout << "Cdrom的构造函数" << endl; }
	~Cdrom() { cout << "Cdrom的析构函数" << endl; }
};

class Computer {
public:
	Computer(CPU cpu1);
	void run() { cout << "Computer:run函数" << endl; }
	void stop() { cout << "Computer:stop函数" << endl; }
	~Computer() { cout << "Computer的析构函数" << endl; }
private:
	Cdrom cdrom;
	RAM ram;
	CPU cpu;
};
Computer::Computer(CPU cpu1) :cpu(cpu1) { cout << "Computer的构造函数" << endl; }

int main() {
	CPU c(P4, 5, 3.5);
	Computer computer(c);
	computer.run();
	computer.stop();
	return 0;
}


