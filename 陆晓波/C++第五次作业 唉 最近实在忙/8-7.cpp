#include <iostream> //preprocessor directives
#include <vector>
using namespace std ;
//using namespace std;
//using namespace 使用命名空间
//std : standard library 标准程序库
class Point{
public:
Point(int xx , int yy):x(xx) , y(yy){} ;
Point & operator ++ () ;
Point  operator ++ (int) ;
Point & operator -- () ;
Point  operator -- (int) ;
void display(){cout << "(" << x << "," << y << ")" << endl ;}
private:
    int x , y ;
};
Point & Point::operator ++(){
x++ ; y++ ;
return *this ;
}
Point Point::operator ++(int){
Point old = *this ;
++(*this) ;
return old ;
}
Point & Point::operator --(){
x-- ; y-- ;
return *this ;
}
Point Point::operator --(int){
Point old = *this ;
--(*this) ;
return old ;
}
int main(){
Point m(3 , 4) , n(16 , 18) ;
(m++).display() ;
(++m).display() ;
(--n).display() ;
(n--).display() ;
return 0 ;

}
