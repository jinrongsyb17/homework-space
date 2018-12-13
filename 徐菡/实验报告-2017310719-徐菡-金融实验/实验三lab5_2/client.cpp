// client.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
#include "client.h"
using namespace std;

CLIENT::CLIENT(int ID) :ID(ID){
	CLIENTNUM++;
}

int CLIENT::CLIENTNUM = 0;

CLIENT::~CLIENT(){
	CLIENTNUM--;
}

int CLIENT::GetID(){
	return ID;
}

void CLIENT::SetID(int ID1){
	ID = ID1;
}

