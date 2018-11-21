#include<iostream>
using namespace std;

#define N 8

int main()
{
    float score[N];
    float average;
    float scoresum;
    for(int i=0;i<N;i++){
        cout<<"请输入第"<<i+1<<"个学生的成绩：";
        cin>>score[i];
    }
    
    for(int i;i<N;i++)
        scoresum=scoresum+score[i];
    average=scoresum/N;
    cout<<"这"<<N<<"个学生的平均成绩为："<<average; 
    return 0;
}