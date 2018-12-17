// 实验一-.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};
class CPU {
public:
	CPU(CPU_Rank rank, int frequency, float voltage);
		void run();
		void stop();
		~CPU() { cout << "调用析构函数" << endl; };
private:
	CPU_Rank rank;
	int frequency;
	float voltage;

};
CPU::CPU(CPU_Rank rank, int frequency, float voltage)
{
	cout << "调用CPU的构造函数" << endl;
	cout << "rank:" << rank << endl;
	cout << "frequency:" << frequency << "MHz"<<endl;
	cout << "voltage:" << voltage << "V"<<endl;

}
void CPU::run() { cout << "run函数" << endl; }
void CPU::stop() { cout << "stop函数" << endl; }

int main()
{
	CPU cpu(P5, 50, 2.5);
	cpu.run();
	cpu.stop();
	
    return 0;
}

