#include <iostream> //preprocessor directives
#include <vector>
using namespace std ;
//using namespace std;
//using namespace 使用命名空间
//std : standard library 标准程序库
class BaseClass{
public:
virtual ~BaseClass() ;
};
BaseClass::~BaseClass(){
cout << "Base destructor" << endl ;
}
class DerivedClass:public BaseClass{
public:
~DerivedClass() ;
};
DerivedClass::~DerivedClass(){
cout << "derived destructor" << endl ;
}
int main(){
BaseClass *b = new DerivedClass() ;
delete b ;
return 0 ;
}
