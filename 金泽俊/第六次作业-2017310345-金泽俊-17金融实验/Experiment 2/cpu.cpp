#include"cpu.h"
CPU::CPU() {
	frequency = 37;
	voltage = 3.0;
	rank = P1;
	cout << "CPU has been established." << endl;
};
CPU::~CPU(){
	cout << "CPU has been destoryed." << endl; };
int CPU::run() { 
	cout << "CPU is running." << endl; 
	return 2;
};
int CPU::stop() {
	cout << "CPU has stopped." << endl;
	return 2;
};
CPU::CPU(int a, float b, int c) {
	frequency = a;
	voltage = b;
	rank = static_cast<CPU_Rank>(c);
}
void CPU::show() {
	cout << "Frequency:" << frequency << endl;
	cout << "Voltage:" << voltage << endl;
	cout << "Rank" << rank << endl;
}
