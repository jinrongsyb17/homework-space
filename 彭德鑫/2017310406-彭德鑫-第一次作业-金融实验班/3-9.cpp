#include<iostream>
using namespace std;
bool prime(int x){
	bool flag;
	flag=true;
	for(int i=2;i<x;i++)
	if(x%i==0)
	{flag=false;break;
}
	return flag;
} 
int main(){int x;
cout<<"输入一个大于1的整数"<<endl;
cin>>x;
if(prime(x==true))
cout<<x<<"是质数"<<endl;
else
cout<<x<<"不是质数"<<endl;
}
