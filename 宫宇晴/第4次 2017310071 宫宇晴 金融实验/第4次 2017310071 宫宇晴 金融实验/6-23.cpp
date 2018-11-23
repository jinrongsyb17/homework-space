//
//  main.cpp
//  6-23
//
//  Created by Evenstar on 2018/11/20.
//  Copyright © 2018年 Evenstar. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

#define N 8
float grades[N];

int main()
{
    int i;
    float total,average;
    for(i=0;i<N;i++)
    {
        cout<<"Enter grade #"<<(i+1)<<":";
        cin>>grades[i];
    }
    
    total=0;
    for(i=0;i<N;i++)
        total +=grades[i];
    average=total/N;
    cout<<"Average grade:"<<average<<endl;
    return 0;
}
