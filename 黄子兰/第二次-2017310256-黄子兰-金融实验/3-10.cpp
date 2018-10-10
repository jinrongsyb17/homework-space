#include<iostream>
using namespace std;
double power(int a,int b){
	int i,k,r;
	if(a>b){
		i=a;k=b;}
    else
	{i=b;k=a;}
	r=i%k;
	for(;r>0;){
		i=k;
		k=r;
		r=i%k;
	}
	return k;
}
double gbs(double x,double y){
	double m,n;
	m=x*y;
	n=m/power(x,y);
	return n;
}
int main(){
	double a,b;
	cout<<"Please enter two integers (a and b): ";
	cin>>a>>b;
	cout<<"The minimum commom divisor is : "<<power(a,b)<<endl;
	cout<<"The greatest commom multiple is : "<<gbs(a,b)<<endl;
	return 0;
}
