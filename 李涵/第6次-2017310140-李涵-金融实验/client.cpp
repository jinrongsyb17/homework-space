#include "client.h"
#include <iostream>
using namespace std;
char CLIENT::Servername = 'A';
int CLIENT::Clientnum = 0;
CLIENT::CLIENT() { Clientnum++; };
CLIENT::~CLIENT() { Clientnum--; };
void CLIENT::changeServername(char sn) { Servername = sn; };
void CLIENT::showServername() { cout << "服务器名" << Servername << endl; };
void CLIENT::showClientnum() { cout << "客户总数" << Clientnum << endl; };