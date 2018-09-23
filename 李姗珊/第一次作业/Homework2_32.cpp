
//猜数
//#include "Homework2_32.hpp"
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    srand((unsigned)time(NULL));
        //取随机数并赋值给变量randonm
        int random=rand()%100;
        //给猜数变量赋值-1使其与random不可能相等，从而进入循环
       int guessNumber=-1;
      //进入猜数的循环
    while(random!=guessNumber){
      
        cout<<"Guess the number(1~100)"<<endl;
        cin>>guessNumber;
             if(guessNumber>random){
                 cout<<"此数比目标值大"<<endl;
                }
             else if(guessNumber<random){
                 cout<<"此数比目标值小"<<endl;
                 }
             else if(guessNumber==random){
                 cout<<"恭喜你！答对了！数字是"<<guessNumber;
                 break;
                }
             
       }
    
             return 0;
}
