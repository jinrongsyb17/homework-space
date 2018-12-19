#include<iostream.h>
#include"client.h"
client::client(){ClientNum++;}//增加一个对象
client::~client(){ClientNum--;}//减少一个对象
void client::ChangeServerName(char sn){ServerName=sn;}
void client::showServerName(){cout<<"服务器名："<<ServerName<<endl;}
void client::showClientNum(){cout<<"客户总数："<<ClientNum<<endl;}
char client::ServerName='A';
int client::ClientNum=0;