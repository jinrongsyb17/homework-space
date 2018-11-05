//2-29 for 
#include<iostream>
using namespace std;
int main(){
		cout<<"易于判断，1不是质数，所以循环从2开始计算"<<endl; 
		for(int x=2,y=x-1;x<101;){
					for(;x%y!=0;y--){}
			if(y==1) 
			cout<<x<<endl;
			x++;
			y=x-1;
		}
}
