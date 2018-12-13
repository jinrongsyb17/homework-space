#include<iostream>
#include"Computer.h"
computer::computer() {
	cp = CPU();
	ram = RAM();
	cdrom = CDROM();
}
computer::computer
(int a, float b, int c, int d, int e, int f) :
	cp(a, b, c), ram(d, e), cdrom(f) {};
void computer::show() {
	cp.show();
	ram.show();
	cdrom.show();
}
void computer::run() 
{
	cp.run();
	cout << "The computer is running." << endl;
}
void computer::shutdown() {
	cp.stop();
	cout << "The computer has shut down." << endl;
	cout << endl;
}