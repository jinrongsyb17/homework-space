#include <iostream> //preprocessor directives

using namespace std;
//using namespace 使用命名空间
//std : standard library 标准程序库
//2-27.cpp
int main()
{ cout << "你考试考了多少分？（0~100）" << endl ;
  int n ;
  cin >> n ;
  for ( n ; n < 0 || n > 100 ; cin >> n )
  cout << "请输入有效数据！" << endl ;
  cout << "你的等级为：" ;
  if (n < 60)
   cout << "差" << endl ;
   else if (n < 80)
   cout << "中" << endl ;
   else if (n < 90)
   cout << "良" << endl ;
   else cout << "优" << endl ;
  return 0 ;


}
