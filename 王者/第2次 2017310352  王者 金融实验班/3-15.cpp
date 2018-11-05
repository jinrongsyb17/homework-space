#include<iostream.h>

int getPower(int x,int y);
int main()
{
	int x,y, answer;
	cout<<"请输入一个整数:";
	cin>>x;
	cout<<"请输入另一个整数:";
	cin>>y;
	answer=getPower(x,y);
	cout<<answer<<endl;
	return 0;
}
int getPower(int x, int y)
{
	if(y==1)
		return x;
	else
		return(x*getPower(x,y-1));
}
	
