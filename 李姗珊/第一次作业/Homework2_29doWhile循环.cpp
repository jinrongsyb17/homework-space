//do-while循环
//  Homework2_29doWhile循环.cpp
//  Test1
//
//  Created by 李姗珊 on 2018/10/10.
//  Copyright © 2018年 李姗珊. All rights reserved.
//


#include<iostream>
using namespace std;
int main(){
    //声明变量
    bool isPrimeNumber;
    int numberOfPrime=0;
    int i=2;
    int k;
    
    do{
        isPrimeNumber=true;
        k=2;
        //判断是否为质数
       do {
        if ((i%k==0)&&(k!=i) ) {
        isPrimeNumber=false;
        break;
            }
           k++;
       }while(k<i);
        
        if(isPrimeNumber){
            numberOfPrime++;
            cout<<i<<" ";
        }
      //为了让质数列表更美观 8个成一排分布
        if(numberOfPrime%8==0){
            cout<<endl;
        }
     i++;
    }while(i<100);
    
    return  0;
}

