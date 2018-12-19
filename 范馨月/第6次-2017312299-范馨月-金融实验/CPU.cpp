#include<iostream>
using namespace std;

enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };

class CPU {
public:
	CPU(CPU_Rank inputR, int inputF, double inputV) {
		rank = (CPU_Rank)inputR;
		frequency = inputF;
		voltage = inputV;
		cout << "The constructor is called." << endl;
	}
	void run() {
		cout << "CPU is running." << endl;
		cout << rank <<endl<< frequency <<" MHZ"<<endl<< voltage<<" V"<<endl;
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

int main() {
	CPU cpu(P2, 1200, 100.0);
	cpu.run();
	cpu.stop();
	cpu.~CPU();

	system("pause");
	return 0;
}