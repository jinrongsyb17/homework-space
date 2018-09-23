
//输出九九乘法算表
//#include "Homework2_35.hpp"

#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=9;i++){
        for(int k=1;k<=i;k++){
            if((i*k)<10){//为让每一列数字对齐，保持美观
                cout<<" ";
            }
            cout<<i*k<<"  ";
        }
        cout<<endl;//换行
    }
    
    return 0;
}




