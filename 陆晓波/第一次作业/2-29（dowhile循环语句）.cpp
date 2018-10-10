#include <iostream> //preprocessor directives

using namespace std;
//using namespace 使用命名空间
//std : standard library 标准程序库
//2-29.cpp(do...while循环语句)
int main()
{ cout << "1~100的质数有：" ;
 int m = 0 , i = 1 , n = 2 ;
 do {
do
 {
    if (n % i == 0)
     m++ ;
     i++ ;
 }
     while (i < n) ;
     if (m == 1)
     {
         cout << n << " " ;
     }
     i = 1 ;
     m = 0 ;
     n++ ;}
 while (n <= 100) ;
}
