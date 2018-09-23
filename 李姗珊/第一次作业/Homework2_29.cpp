
//#include "Homework2_29.hpp"
#include<iostream>
using namespace std;
int main(){
    //声明变量
    bool isPrimeNumber;
    int numberOfPrime=0;
    
    for(int i=2;i<100;i++){
        isPrimeNumber=true;
        //判断是否为质数
        for (int k=2; k<i;k++) {
            if ((i%k==0)&&(k!=i) ) {
                isPrimeNumber=false;
                break;
            }
        }
        
        if(isPrimeNumber){
            numberOfPrime++;
            cout<<i<<" ";
        }
        //为了让质数列表更美观 8个成一排分布
        if(numberOfPrime%8==0){
            cout<<endl;
        }
    }
    
    return  0;
}
