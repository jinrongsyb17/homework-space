//ram.h
#ifndef ram_h
#define ram_h
#include<iostream>
using namespace std;
class ram {
public:
	ram() {}
	void show() {
		cout << "It has a ram" << endl;
	}
};
#endif

//cdrom.h
#ifndef cdrom_h
#define cdrom_h
#include<iostream>
using namespace std;
class cdrom {
public:
	cdrom() {};
	void show() {
		cout << "It has a cdrom" << endl;
	}
};

#endif

//computer.cpp
#include"cpu.h"
#include"cdrom.h"
#include"ram.h"
class compurter {
public:
	compurter() {};
	compurter(CPU &cpu1, ram &ram1, cdrom &cdrom1) :c_cpu(cpu1), c_ram(ram1), c_cdrom(cdrom1) {};
	void show() {
		c_cpu.show();
		c_cdrom.show();
		c_ram.show();
	}
	void run() {
		cout << "The compurter is runing." << endl;
	}
	void stop() {
		cout << "The compurter has shut down." << endl;
	}
private:
	CPU c_cpu;
	ram c_ram;
	cdrom c_cdrom;
};
int main() {
	CPU cpu1(P6, 3.2, 57);
	ram ram1;
	cdrom cdrom1;
	compurter compurter1(cpu1, ram1, cdrom1);
	compurter1.run();
	compurter1.show();
	compurter1.stop();
	return 0;
}
