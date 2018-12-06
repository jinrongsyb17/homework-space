#include <iostream> //preprocessor directives
#include <vector>
using namespace std ;
//using namespace std;
//using namespace 使用命名空间
//std : standard library 标准程序库
class Counter{
public:
Counter(double r , double i):real(r) , imag(i){} ;
friend Counter operator + (Counter &c1 , Counter &c2) ;
void display(){cout << "(" << real << "," << imag << ")" << endl ;
}
private:
    double real , imag ;
};
Counter operator + (Counter &c1 , Counter &c2){
return Counter(c1.real+c2.real , c1.imag+c2.imag) ;
}
int main(){
Counter x(3 , 4) , y(12 , 2) ;
(x+y).display() ;
return 0 ;
}
