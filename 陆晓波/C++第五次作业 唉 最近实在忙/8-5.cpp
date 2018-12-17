#include <iostream> //preprocessor directives
#include <vector>
using namespace std ;
//using namespace std;
//using namespace 使用命名空间
//std : standard library 标准程序库
class Mammal{
public:
virtual void speak(){cout << "mammal is speaking" << endl ;
}
};
class Dog:public Mammal{
public:
void speak(){cout << "dog is speaking" <<endl ;
}
};
int main(){
Dog d ;
d.speak() ;
return 0 ;
}
