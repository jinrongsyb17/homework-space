#include <iostream>
using namespace std;

enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};
class CPU {
public:CPU(CPU_Rank r, int f, float v);
	   ~CPU() { cout << "destructing CPU..." << endl; }
	   void run() { cout << "running!" << endl; }
	   void stop() { cout << "stoping!" << endl; }
private:CPU_Rank rank;
		int frequency;
		float voltage;
};
CPU::CPU(CPU_Rank r, int f, float v) {
	rank = r;
	frequency = f;
	voltage = v;
	cout<<"constructing CPU..." << endl; 
	cout << "Rank: " << rank << endl;
	cout << "Frequency: " << frequency << " MHz" << endl;
	cout << "Voltage: " << voltage << endl;
}
int main() {
	CPU cpu(P1, 5, 11.28);
	cpu.run();
	cpu.stop();
	cpu.~CPU();
	system("pause");
	return 0;
}

