#include <iostream> //preprocessor directives
#include <vector>
using namespace std ;
//using namespace std;
//using namespace 使用命名空间
//std : standard library 标准程序库
int main(){
    int i , j ;
    cout << "请输入矩阵的行数：" << endl ;
    cin >> i ;
    cout << "请输入矩阵的列数：" << endl ;
    cin >> j ;
int a[i][j] ;
cout << "请依次输入矩阵的值" << endl ;
for(int m = 0 ; m < i ; m++)
    for(int n = 0 ; n < j ; n++)
        cin >> a[m][n] ;
int b[j][i] ;
for(int ii = 0 ; ii < i ; ii++)
    for(int jj = 0 ; jj < j ; jj++)
       b[jj][ii] = a[ii][jj] ;
cout << "这个矩阵的转置为：" << endl ;
for(int ii = 0 ; ii < j ; ii++){
for(int jj = 0 ; jj < i ; jj++)
cout << b[ii][jj] << " " ;
cout << endl ;}
return 0 ;

}
