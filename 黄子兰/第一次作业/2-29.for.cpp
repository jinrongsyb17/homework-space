#include<iostream>
using namespace std;
int main(){
	int i,j;
	bool flag;
	cout<<"The prime numbers between 1~100 is : ";
	i=2;
	for(;i<=100;){
		j=2;
		flag=true;
		while(j<i){
			if(i%j==0){
			flag=false;
			break;}
			j++;
		}
		if(flag) cout<<i<<" ";
		i++;
	}
	return 0;
}

