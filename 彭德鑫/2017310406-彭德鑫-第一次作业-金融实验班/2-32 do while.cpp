//2-32 do while
#include<iostream>
using namespace std;
int main(){
	int x=0,y;
	cout<<"我们来玩一个猜数游戏，你输入一个0~100的数字，我会给出大小判别，直到你猜对，所以你肯定会赢！"<<endl;
	cin>>y;
	do{
	if(x<y)
	cout<<"这数大了"<<endl;
	if(x>y)
	cout<<"这数小了"<<endl;
	cin>>y;
	}
	while(x!=y);
	if(x==y)
	cout<<"你猜对了，不忘初心 zero is all beginning."<<endl;
}
