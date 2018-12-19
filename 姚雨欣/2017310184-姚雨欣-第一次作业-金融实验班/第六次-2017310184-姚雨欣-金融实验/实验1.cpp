#include <iostream>
using namespace std;

enum CPUrank{ p1,p2,p3,p4,p5,p6,p7 };
class CPU {
public:
	CPU(int drank, int dfrequency, float dvoltage) {
		cout << "现在正在调用构造函数";
	}
	~CPU() {
		cout << "现在调用析构函数";
	}
	void run() {
		cout << "现在在运行";
	}
	void stop() {
		cout << "现在停止运行";
	}
private:
	int frequency;
	float voltage;
	CPUrank rank;
};

CPU::CPU(int drank, int  dfrenquency, float dvoltage) {
	rank = drank;
	frequency = dfrequency;
	voltage = dvoltage;
}

int main() {
	CPU cpu(12, 29, 13);
	cpu.run();
	cpu.stop();
	return 0;

}