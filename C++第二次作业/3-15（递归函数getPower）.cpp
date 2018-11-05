#include <iostream> //preprocessor directives
using namespace std;
//using namespace 使用命名空间
//std : standard library 标准程序库
int getPower(int x , int y){
if (y < 0)
    return 0 ;
else if (y = 0)
    return 1 ;
else return x*getPower(x , y-1) ;
}
double getPower(double x , int y){
if (y = 0)
    return 1 ;
else if (y > 0)
    return x*getPower(x , y-1) ;
else return getPower(x , y+1)/x ;
}
int main(){
int a , m ;
double b ;
cout << "请分别输入整数a及实数b作为底数" << endl ;
cin >> a >> b ;
cout << "现在请输入一个整数m作为指数" << endl ;
cin >> m ;
cout << "恭喜你，以下为计算结果！" << endl ;
cout << "a的m次方为" << double(getPower(a , m)) << endl ;
cout << "b的m次方为" << getPower(b , m) << endl ;
return 0 ;
}
