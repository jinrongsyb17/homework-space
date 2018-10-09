//
//  Homework3_10求最大公约数最小公倍数.cpp
//  Test1
//
//  Created by 李姗珊 on 2018/9/29.
//  Copyright © 2018年 李姗珊. All rights reserved.
//
using namespace std;
#include<iostream>
int main(){
    
    int x,y;
    //让用户输入两个整数
    cout<<"Enter two integers"<<endl;
    //将用户输入的整数赋给x和y两个变量
    cin>>x>>y;
    int LCM;//最小公倍数
    int GCD;//最大公约数
    //先将两者中的较大值赋给最小公倍数
    //两者中的较小赋给最大公约数
    if(x>y){
        LCM=x;
        GCD=y;
    }
    else{
        LCM=y;
        GCD=x;
    }
    //求出最大公约数，从两数中较小的一个数开始检验，逐渐-1
    for(int i=GCD;i>=1;i--){
        if((x%i==0)&&(y%i==0)){
            GCD=i;
            break;
        }
    }
    //求出最小公倍数，从x两数中较大的一个数开始检验，逐渐+1
    for(int k=LCM;;k++){
        if((k%x==0)&&(k%y==0)){
            LCM=k;
            break;
        }
    }
    //输出最小公倍数
    cout<<"The lowest common multiple between "<<x<<" and "<<y<<" is "<<LCM<<endl;
    //输出最大公约数
    cout<<"The greatest common divisor between "<<x<<" and "<<y<<" is "<<GCD<<endl;
    
    
    return 0;
}

