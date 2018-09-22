#include <iostream> //preprocessor directives

using namespace std;
//using namespace 使用命名空间
//std : standard library 标准程序库
//2-29.cpp(for循环语句)
int main()
{ cout << "1~100的质数有：" ;
 int m = 0 , i = 1 , n = 1 ;
 for (n ; n <= 100 ; n++)
 {for (i ; i < n ; i++)
{
    if (n % i == 0)
     m++ ;
}
     if (m == 1)
     {
         cout << n << " " ;
     }
     i = 1 ;
     m = 0 ;
     }
}
