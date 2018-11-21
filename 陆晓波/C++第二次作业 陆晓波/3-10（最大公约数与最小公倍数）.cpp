#include <iostream> //preprocessor directives
#include <math.h>
using namespace std;
//using namespace 使用命名空间
//std : standard library 标准程序库
int max1(int x , int y){
for (int i = min(x , y) ; i > 0 ; i--){
    if (x % i == 0 && y % i == 0)
    return i ;
}
}
int min1(int x , int y){
for (int i = max(x , y) ; i > 0 ; i++)
    if (i % x == 0 && i % y == 0)
        return i ;
}
int main(){
int x , y ;
cout << "请输入两个整数" << endl ;
cin >> x >> y ;
cout << "最大公约数为" << max1(x, y) << endl ;;
cout << "最小公倍数为" << min1(x ,y) << endl ;
return 0 ;}
