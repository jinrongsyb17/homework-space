#include <iostream>
#include<string>
using namespace std;

#define N 8
float grades[N];
 
 int main()
 {
	int i;
	float total,average;
	for (i=0;i<N;i++)
	{
		cout<<"enter grade#"<<(i+1)<<":";
		cin>>grades[i];
	}
	
	total=0;
	
	for(i=0;i<N;i++)
	total+=grades[i];
	average=total / N;
	cout<<"\naverage grade:"<<average<<endl;
	return 0;
		
}
