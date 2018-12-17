#include<iostream>
using namespace std;

enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };

class CPU {
public:
	CPU(CPU_Rank inputR = P1, int inputF=1500, double inputV=200.0) {
		rank = (CPU_Rank)inputR;
		frequency = inputF;
		voltage = inputV;
		cout << "The constructor is called." << endl;
	}
	void run() {
		cout << "CPU is running." << endl;
		cout << rank << endl << frequency << " MHZ" << endl << voltage << " V" << endl;
	}
	void stop() {
		cout << "CPU has stopped." << endl;
	}
	~CPU() {
		cout << "The deconstructor is called." << endl;
	}
private:
	CPU_Rank rank;
	int frequency;
	double voltage;
};

class RAM {
private:
	double size;
public:
	RAM(double inputSize=4) {
		size = inputSize;
	}
};

class CDROM {
private:
	double size;
public:
	CDROM(double inputSize=100) {
		size = inputSize;
	}
};

class Computer {
private:
	CPU cpu;
	RAM ram;
	CDROM cdrom;
public:
	Computer(CPU_Rank inputR, int inputF, double inputV, double sizeRam, double sizeCdrom) :cpu(inputR, inputF, inputV), ram(sizeRam), cdrom(sizeCdrom) {
		cout << "The constructoe is called" << endl;
	}
	void run() {
		cout << "The computer is running" << endl;
		cpu.run();
	}
	void stop() {
		cout << "The computer has stopped" << endl;
		cpu.stop();
	}
};

int main() {
	Computer com(P3, 1600, 300.0, 2.0, 400.0);
	com.run();
	com.stop();

	system("pause");
	return 0;

}