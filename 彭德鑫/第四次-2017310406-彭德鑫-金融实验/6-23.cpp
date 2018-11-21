#include<iostream>
using namespace std ;
const int N = 8;
float avg(int*&);
int main(){
    int *student = new int[N];
    int i;
    for (i=0;i<N;++i){
        cout<<"输入学生"<<i+1<<"的成绩: ";
        cin>>*(student+i);
    }
    cout<<"平均成绩为: "<<avg(student)<<endl;
    delete[] student;
}
float avg(int*& st){
    int i;
    float avg=0;
    for (i=0;i<N;++i){
        avg+=*(st+i);
    }
    return avg/N;
}
