#include "iostream"
#include "stdio.h" 
using namespace std; 
 
int fun(int n){//判断函数，是质数返回1，否则返回0 
    int ans =1;
    for(int i=2;i<n;i++)//从2到n-1判断能否整除n 
        if(n%i==0){
            ans=0;
            break;
        }
    return ans;      
}
 
int main()
{
    int n;
    cin>>n;//输入n 
    if(fun(n))//判断输出 
        cout<<n<<"是质数";
    else
       cout<<n<<"不是质数";
    return 0; 
}