//
//  Homework3_9判别质数.cpp
//  Test1
//
//  Created by 李姗珊 on 2018/9/29.
//  Copyright © 2018年 李姗珊. All rights reserved.
//

//#include "Homework3_9判别质数.hpp"
using namespace std;
#include<iostream>
int main(){
    cout<<"Enter an integer"<<endl;
    int number;
    cin>>number;
    bool isPrime=true;
    for(int i=2;i<number;i++){
        if(number%i==0){
            isPrime=false;
            break;
        }
    }
    
    if(isPrime){
        cout<<"It is a prime number "<<endl;
    }
    else cout<<"It is not a prime number"<<endl;
    
    
    
    
    
    
    return 0;
}
