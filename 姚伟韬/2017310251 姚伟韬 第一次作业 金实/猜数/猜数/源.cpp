//猜数.cpp
#include<iostream>
using namespace std;
int main(){
	int x=45,y;
	while(x!=y){
	cin>>y;
	if (x!=y)
		if(x>y)   cout<<"你猜小了"<<endl;
		else      cout<<"你猜大了"<<endl;
	else  cout<<"回答正确"<<endl;
	} 
system("pause");
return 0;
}
