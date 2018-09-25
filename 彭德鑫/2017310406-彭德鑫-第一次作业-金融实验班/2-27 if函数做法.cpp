//2-27作业
#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"你考试考了多少分"; 
	cin>>x;
	if (90<=x&&x<=100)
	cout<<"优"<<endl;
	else 
		if (80<=x&&x<90)
		cout<<"良"<<endl;
		else
			if (60<=x&&x<80)
			cout<<"中"<<endl;
				else
				cout<<"差"<<endl;
	return 0;
} 
