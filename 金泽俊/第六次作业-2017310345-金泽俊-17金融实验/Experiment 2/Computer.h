#pragma once
#ifndef COMPUTER_H
#define COMPUTER_H
#include"cpu.h"
#include"CDROM.h"
#include"RAM.h"
class computer {
public:
	computer();
	computer(int a, float b, int c, int d, int e, int f);
	void show();
	void run();
	void shutdown();
private:
	CPU cp;
	RAM ram;
	CDROM cdrom;
};
#endif