//2-29 while 
#include<iostream>
using namespace std;
int main(){
	cout<<"易于判断，1不是质数，所以循环从2开始计算"<<endl; 
	int x=2,y=x;
	do{
		do	
			y--;
			while (x%y!=0);
		if (y==1)
			cout<<x<<" ";
			x++;
			y=x-1;
		}while(x<101);
}
