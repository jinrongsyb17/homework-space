// 实验一.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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
	CPU_RANK rank;//将CPU_RANK的值赋给私有成员
	int frequency;
	float voltage;
};

void CPU::run() { cout << "CPU:run函数" << endl; }
void CPU::stop() { cout << "CPU:stop函数" << endl; }

int main() {
	CPU cpu(P3, 10, 2.5);
	cpu.run();
	cpu.stop();
	return 0;
}
