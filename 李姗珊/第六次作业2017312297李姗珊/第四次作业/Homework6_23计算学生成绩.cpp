#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"输入学生人数"<<endl;
    cin>>number;
    double * array=new double[number]();
    double sum=0;
    for(int i=0;i<number;i++){
        cout<<"输入第"<<i+1<<"个学生的成绩"<<endl;
        cin>>array[i];
        sum+=array[i];
    }
    double average=sum/number;
    cout<<"学生的平均成绩为 "<<average;
    delete[]array;
    return 0;
}


