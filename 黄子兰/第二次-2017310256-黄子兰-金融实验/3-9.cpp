#include<iostream>
using namespace std;
bool symm(unsigned n){
	int m=2;
	int i=1;
	while(m<=n){
	if(n%m==0){ 
		i++;
	}	
	m++;
	}
	return i==2;
}
int main(){
	unsigned n;
	cout<<"Enter a number : ";
	cin>>n;
	if(symm(n))
	cout<<"Yes,it is a prime number"<<endl;
	else
	cout<<"No,it is not a primr number"<<endl;
	return 0;
}
