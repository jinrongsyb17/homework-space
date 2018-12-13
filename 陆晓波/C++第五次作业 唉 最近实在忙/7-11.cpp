#include <iostream> //preprocessor directives
#include <vector>
using namespace std ;
//using namespace std;
//using namespace 使用命名空间
//std : standard library 标准程序库
class BaseClass{
public:
void fn1() ;
void fn2() ;
         };
void BaseClass::fn1(){
cout << "BaseClass::fn1" << endl ;
}
void BaseClass::fn2(){
cout << "BaseClass::fn2" << endl ;
}
class DerivedClass:public BaseClass{
public:
    void fn1() ;
    void fn2() ;
};
void DerivedClass::fn1(){
cout << "DerivedClass::fn1" << endl ;
}
void DerivedClass::fn2(){
cout << "DerivedClass::fn2" << endl ;
}
int main(){
DerivedClass x ;
BaseClass *y = &x ;
DerivedClass *z = &x ;
x.fn2() ;
y->fn1() ;
z->fn2() ;
return 0 ;
}

