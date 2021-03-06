// ConsoleApplication28.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };
class CPU {
public:
	CPU(CPU_Rank r,int f,float v) {
		rank = r;
		frequency = f;
		voltage = v;
		cout << "调用构造函数" << endl;
	};
	~CPU() {
		cout << "调用析构函数" << endl;
	}
	void run() {
		cout << "CPU运行" << endl;
	};
	void stop() {
		cout << "CPU停止" << endl;
	};
private:
	CPU_Rank rank;
	int frequency;
	float voltage;
};

int main()
{
	CPU cpu1(P3,200,110);
	cpu1.run();
	cpu1.stop();
}