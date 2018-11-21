#include<iostream>
using namespace std;

class baseclass{
public:
    baseclass(){cout<<"构造基类对象"<<endl;}
};

class derivedclass:public baseclass{
public:
    derivedclass(){cout<<"构造派生对象"<<endl;}
};

int main()
{
    derivedclass();
    return 0;
}