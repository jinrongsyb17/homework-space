// 实验三（2）.cpp : 定义控制台应用程序的入口点。
//client

#include "stdafx.h"
#include<iostream>
#include"client.h"
using namespace std;

int CLIENT::count = 1;
void CLIENT::showCount() {
	cout << "Object count=" << count << endl;
}
