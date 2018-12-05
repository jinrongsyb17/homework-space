#include<iostream>
#include<iomanip>
#include"Array.h"
using namespace std;


int main(){
	int n;
	double average,total=0;
	cout<<"请输入学生人数："<<endl;
	cin>>n; 
	Array<double> score(n);
	for(i=0;i<n;i++)
	{cout<<"请输入第"<<i+1<<"个学生的成绩："<<endl;
	cin>>score[i];
	total+=score[i]; 
	}
	average=total/n;
	cout<<"平均分="<<average<<endl;
	return 0; 
} 
