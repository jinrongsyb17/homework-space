#include "pch.h"
#include <iostream>
using namespace std;

class CPU {
public:
	CPU(int f, double v) :frequency(f), voltage(v) {cout << "调用函数" << endl; }
	~CPU() {cout << "调用析构函数" << endl; }
	void run();
	void stop();
private:
	enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};
	int frequency;
	double voltage;
};
void CPU::run() {
	cout << "程序开始执行" << endl;
	CPU_Rank rank=P1;
	cout << "等级：" << P1<<endl;
	cout << "频率：" << frequency<<"MHz"<< endl;
	cout << "电压：" << voltage << endl;
}
void CPU::stop() {
	cout << "程序停止调用" << endl;
}
int main() {
	CPU cpu(20, 220);
	cpu.run();
	cpu.stop();
	return 0;
}