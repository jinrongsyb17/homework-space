#include<iostream>
#include<cmath>
using namespace std;
int getpower(int x,int y){
if(y==1) return x;
else return x*getpower(x,y-1);
}
double getpower(double x,int y){
if (y==1) return x;
else return x*getpower(x,y-1);
}
int main(){
	int a,m;double b;
	cout<<"输入整数a，实数b，整数m"<<endl;
	while(1){
	cin>>a>>b>>m;
	cout<<"a="<<a<<" "<<"b="<<b<<" "<<"m="<<m<<endl;
	cout<<"a^m="<<getpower(a,m)<<endl;
	cout<<"b^m="<<getpower(b,m)<<endl;
}
	return 0; 
}
