#include<iostream>
using namespace std;
int main(){
	int i=10;
	int n;
	cout<<"Please enter a number : ";
	cin>>n;
	if(i==n)
	cout<<"Succeed!"<<endl;
	else if(i<n)
	cout<<"Your number is less than the given one."<<endl;
	else if(i>n)
	cout<<"Your number is more than the given one."<<endl;
	return 0;
}
