// ConsoleApplication35.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include<iostream>
#include"client.h"
using namespace std;

client::client() { Clientnum++; }
client::~client() { Clientnum--; }
void client::Changeservername(char s) { Servername = s; }
void client::showServername() { cout << "服务器名：" << Servername << endl; }
void client::showClientnum() { cout << "客户总数：" << Clientnum << endl; }
char client::Servername = 'A';
int client::Clientnum = 0;
