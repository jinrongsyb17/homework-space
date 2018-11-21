#include<iostream.h>
#include<string.h>
#define N 8
float grade[N];
void main(){
	int i;
	float total,average;
	for(i=0;i<N;i++){
		cout<<"the grade#"<<(i+1)<<": ";
		cin>>grade[i];
	}
	total=0;
	for(i=0;i<N;i++)
		total+=grade[i];
	average=total/N;
	cout<<"the average grade is:"<<average<<endl;
}