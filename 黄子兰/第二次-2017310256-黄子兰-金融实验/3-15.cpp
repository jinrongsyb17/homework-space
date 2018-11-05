#include<iostream>
using namespace std;
int getPower(int x,int y){
	if(y==0)
	return 1;
	else if(y<0)
	return 0;
	else
	return getPower(x,y-1)*x;
} 
double getPower(double x,int y){
	if(y==0)
	return 1;
	else if(y<0)
	return 0;
	else 
	return getPower(x,y-1)*x;
}
int main(){
	int x,y;
	cout<<"Enter two integer: ";
	cin>>x>>y;
	cout<<"x的y次方："<<getPower(x,y)<<endl;
	double m;int n;
	cout<<"Enter a real number and an integer : ";
	cin>>m>>n;
	cout<<"m的n次方："<<getPower(m,n)<<endl;
	return 0; 
}
