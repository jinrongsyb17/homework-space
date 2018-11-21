#include <iostream> //preprocessor directives
#include <math.h>
using namespace std;
//using namespace 使用命名空间
//std : standard library 标准程序库
bool fun1(int x){
int m = 0 ;
for(int i = 2 ; i < x ; i++){
    if (x % i == 0)
        m++ ;
}
return (m == 0) ;
}
int main(){
int a ;
cout << "请输入一个大于1的整数" << endl ;
cin >> a ;
if (fun1(a))
    cout << a << "为质数" << endl ;
    else cout << a << "为合数" << endl ;
    return 0 ;
}
