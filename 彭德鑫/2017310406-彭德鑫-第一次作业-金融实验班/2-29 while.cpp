//2-27作业
#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"你考试考了多少分？（0~100）";
	cin>>x;
		switch(x){
			case ((90<=x)&&(x<=100)):
				cout<<"优"<<endl;
				break;	
			case ((80<=x)&&(x<90)):
				cout<<"良"<<endl;
				break;
			case ((60<=x)&&(x<80)):
				cout<<"中"<<endl;
				break;
			default:
				cout<<"差"<<endl;
				break; 
		}
		return 0;
		
} 
