#include <iostream> //preprocessor directives
using namespace std;
//using namespace 使用命名空间
//std : standard library 标准程序库
//2-35.cpp(九九乘法表啊)
int main(){
for (int i = 1 ; i <= 9 ; i++)
{for (int m = 1 ; m <= i ; m++)
    cout << m << "*" << i << "=" << m*i << " ";
    cout << endl ;
}
return 0 ;
}
