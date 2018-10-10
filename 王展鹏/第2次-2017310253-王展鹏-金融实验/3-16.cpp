#include <iostream>
using namespace std;

int getPower(int x,int y)
{   int i=1,k=1;
	if (y<=0)
		cout<<"0"<<endl;
	else
       while(i<=y)
	{
		k=k*x;
		i++;
	}
	   return k;
}

double getPower(double x,int y)
{   int i=1,k=1;
	{
	if (y<=0)
		cout<<"0"<<endl;
	else
       while(i<=y)
	{
		k=k*x;
		i++; 
	}
	}
	      return k;
}

int main()
{   
	int a,m;
	double b;
	cout<<"请输入两个底数"<<endl;
	cin>>a>>b;
	cout<<"请输入指数"<<endl;
	cin>>m;

	cout<<"a^m的结果为："<<getPower(a,m)<<endl;
	cout<<"b^m的结果为："<<getPower(b,m)<<endl;

	system("pause");
}