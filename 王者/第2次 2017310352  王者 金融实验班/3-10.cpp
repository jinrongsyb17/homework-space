#include<iostream.h>
#include<math.h>
int fnl(int i,int j);
void main()
{
	int i,j,x,y;
	cout<<"请输入一个整数:";
	cin>>i;
	cout<<"请输入另一个整数:";
	cin>>j;
	x=fhl(i,j);
	y=i*j/x;
	cout<<"最大公约数是:"<<x<<endl;
	cout<<"最小公倍数是:"<<y<<endl;
}
int fnl(int i,int j)
{
	int temp;
	if (i<j)
	{
		temp=i;
		i=j;
		j=i;
	}
	while(j!=0)
	{
		temp=i%j;
		i=j;
		j=temp;
	}
	return i;
}
	
