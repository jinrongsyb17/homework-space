#include <iostream>
using namespace std;

class CPU {
public:CPU() { cout << "constructing CPU..." << endl; }
	   ~CPU() { cout << "destructing CPU..." << endl; }
};

class RAM {
public:
	RAM() { cout << "constructing RAM..." << endl; }
	~RAM() { cout << "destructing RAM..." << endl; }
};

class CDRAM {
public:
	CDRAM() { cout << "constructing CDRAM..." << endl; }
	~CDRAM() { cout << "destructing CDRAM..." << endl; }
};

class Computer {
public:
	Computer(int cpu1,int ram1,int cdram1) { 
		int cpu = cpu1;
		int ram = ram1;
		int cdram = cdram1;
		cout << "constructing Computer..." << endl; }
	~Computer() { cout << "destructing Computer..." << endl; }
	void run() { cout << "running!" << endl; }
	void stop() { cout << "stoping!" << endl; }
private:
	CPU cpu;
	RAM ram;
	CDRAM cdram;
};
int main() {
	Computer computer(1,2,3);
	computer.run();
	computer.stop();
	computer.~Computer();
	system("pause");
	return 0;
}