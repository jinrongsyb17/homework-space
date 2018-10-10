#include<iostream>
using namespace std;
int fib(int n)
{
return(n>2)?fib(n-1)+fib(n-2):1;
}
int mian(){
int a;
cout<<"请输入整数：";
cin>>a;
cout<<endl<<"结果为："<<fib(a)<<endl<<endl;
system("pause");
}