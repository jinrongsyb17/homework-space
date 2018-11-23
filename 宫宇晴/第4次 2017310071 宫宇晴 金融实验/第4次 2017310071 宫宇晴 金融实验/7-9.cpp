//
//  main.cpp
//  7-9
//
//  Created by Evenstar on 2018/11/20.
//  Copyright © 2018年 Evenstar. All rights reserved.
//

class Base
{
public:
    int fn1() const{return 1;}
    int fn2() const{return 2;}
};
class Derived: private Base
{
public:
    int fn1(){return Base::fn1();};
    int fn2(){return Base::fn2();};
};
int main()
{
    Derived a;
    a.fn1();
    return 0;
}
