
//while循环
#include<iostream>
using namespace std;
int main(){
    //声明变量
    bool isPrimeNumber;
    int numberOfPrime=0;
    int i=2;
    int k;
    while(i<100){
        isPrimeNumber=true;
        k=2;
        
        //判断是否为质数
       while(k<i){
        if ((i%k==0)&&(k!=i) ) {
                isPrimeNumber=false;
                break;
        }
        k++;
        }
        
        if(isPrimeNumber){
            numberOfPrime++;
            cout<<i<<" ";
        }
        //为了让质数列表更美观 8个成一排分布
        if(numberOfPrime%8==0){
            cout<<endl;
        }
     i++;
    }
    
    return  0;
}
