#include<iostream>
using namespace std;

class Base{
public:
    void fn1(){cout<<"fn1"<<endl;}
    void fn2(){cout<<"fn2"<<endl;}
};

class Derived:private Base{
public:
    void fn1(){Base::fn1();}
    void fn2(){Base::fn2();}
};

int main()
{
    Derived fn;
    fn.fn1();
    fn.fn2();
    return 0;
}