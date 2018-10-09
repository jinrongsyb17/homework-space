//
//  Homework3_13用递归求级数.cpp
//  Test1
//
//  Created by 李姗珊 on 2018/9/29.
//  Copyright © 2018年 李姗珊. All rights reserved.
//

//#include "Homework3_13用递归求级数.hpp"


using namespace std;
#include<iostream>
//定义方法Fibonacci
int Fibonacci(int n){
      //利用公式 Fn=F(n-1)+F(n-2)
       if(n>2){
        //☑️cout<<"正在计算 F"<<(n-1)<<endl;
        //☑️ cout<<"正在计算 F"<<(n-2)<<endl;
        return (Fibonacci(n-1)+Fibonacci(n-2));
     }
       else if(n==1||n==2){
        //☑️cout<<"正在计算F"<<n<<endl;
        //这三条☑️标注的代码在去掉“//”后运行能够观察到递归的顺序，为了输出的简洁美观，只作为注释
        return 1;
     }
    else return 0;
    
 }



int main(){
    int n;
    //提示用户输入一个整数n
    cout<<"输入一个整数n以计算Fn"<<endl;
    cin>>n;
    //如果输入的是一个正整数，则返回结果Fn
    if(n>0){
        cout<<"F"<<n<<" = "<<Fibonacci(n)<<endl;
    }
    //若输入不符合条件，则重新输入
    else cout<<"输入无效";
    
    //打印从F1——Fn的数列
    cout<<"打印数列F1——F"<<n<<endl;
    for(int i=1;i<=n;i++){
        cout<<"F"<<i<<" = "<<Fibonacci(i)<<endl;
    }
    
    /*举例子：输入整数12  控制台输出的结果为:
     
     输入一个整数n以计算Fn
     Program ended with exit code: 012
     F12 = 144
     打印数列F1——F12
     F1 = 1
     F2 = 1
     F3 = 2
     F4 = 3
     F5 = 5
     F6 = 8
     F7 = 13
     F8 = 21
     F9 = 34
     F10 = 55
     F11 = 89
     F12 = 144 */
    
    
    return 0;
}
