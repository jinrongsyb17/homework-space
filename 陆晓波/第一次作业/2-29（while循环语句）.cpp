#include <iostream> //preprocessor directives

using namespace std;
//using namespace 使用命名空间
//std : standard library 标准程序库
//2-29.cpp(while循环语句)
int main()
{ cout << "1~100的质数有：" ;
 int m = 0 , i = 1 , n = 1 ;
 while (n <= 100)
{ while (i < n){
    if (n % i == 0)
     m++ ;
     i++ ; }
     if (m == 1)
     {
         cout << n << " " ;
     }
     i = 1 ;
     m = 0 ;
     n++ ;
}
}
