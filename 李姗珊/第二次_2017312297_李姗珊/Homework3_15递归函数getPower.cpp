//
//  Homework3_15递归函数getPower.cpp
//  Test1
//
//  Created by 李姗珊 on 2018/9/29.
//  Copyright © 2018年 李姗珊. All rights reserved.
//

//#include "Homework3_15递归函数getPower.hpp"
#include<iostream>
using namespace std;
int getPower(int x,int y){
    if(y<0){
        return 0;
    }
    else  if(y==0){
        return 1;
    }
    else{
        int result=x;
        result=result*getPower(x,y-1);
        return result;
    }
}


double getPower(double x,int y){
    double result=x;
    if(y==0){
        return 1;
    }
    else if(y>0){
        result=result*getPower(x,y-1);
        return result;
    }
    else if(y<0){
        int ypositive=(-1)*y;
        double fenmu=result*getPower(result,ypositive-1);
        result=1/fenmu;
        return result;
    }
    else return 1;
}

int main(){
    int a;
    double b;
    int m;
    cout<<"输入整数a、实数b作为底数和整数m作为底数"<<endl;
    cin>>a>>b>>m;
    cout<<"a的m次方等于 "<<getPower(a,m)<<endl;
    cout<<"b的m次方等于 "<<getPower(b,m)<<endl;
    /*测试输出结果1:
     输入整数a、实数b作为底数和整数m作为底数
     Program ended with exit code: 03 1.5 -1
     a的m次方等于 0
     b的m次方等于 0.666667
     
     测试输出结果2:
     输入整数a、实数b作为底数和整数m作为底数
     Program ended with exit code: 0 4 2.5 2
     a的m次方等于 16
     b的m次方等于 6.25
     */
    return 0;
}
