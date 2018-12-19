#pragma once
#ifndef CLIENT_H
#define CLIENT_H
class CLIENT {
public:
	CLIENT();
	~CLIENT();
	static void changeServername(char sn);
	static void showServername();
	static void showClientnum();
private:
	static char Servername;
	static int Clientnum;
};
#endif 