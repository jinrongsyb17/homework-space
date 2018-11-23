#include<iostream>
using namespace std;
class Base{
public:
void fn1(){cout<<"a"<<endl;}
void fn2(){cout<<"b"<<endl;}
};
class Derived:private Base{
public:
void fn1(){Base::fn1();}
};
int main(){
Derived d;
d.fn1();
return 0;
} 
