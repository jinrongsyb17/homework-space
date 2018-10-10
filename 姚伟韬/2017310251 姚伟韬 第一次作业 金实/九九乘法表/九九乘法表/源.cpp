// ¾Å¾Å³Ë·¨±í.cpp
#include<iostream>
using namespace std;
int main(){
	int x,y;
	for(x=1;x<=9;x++){
		for(y=1;y<=x;y++)
		
			cout<<y<<"*"<<x<<"="<<x*y<<' ';
		cout<<endl;}
	system("pause");
	return 0;
}

