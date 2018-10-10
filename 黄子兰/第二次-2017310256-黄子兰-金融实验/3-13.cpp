#include<iostream>
using namespace std;
double Fib(int n){
	if(n==1)
	return 1;
	else if(n==2)
	return 1;
	else if(n>2)
	return Fib(n-1)+Fib(n-2);
}
int main(){
	int n;
	cout<<"Enter an integer : ";
	cin>>n;
	cout<<"The result is : "<<Fib(n)<<endl;
	return 0;
}
