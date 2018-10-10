#include<iostream.h>

int fib(int n);
int main()
{
	int n,answer;
	cout<<"请输入一个整数:";
	cin>>n;
	cout<<""<<endl<<endl;
	answer=fib(n);
	cout<<answer<<"is"<<n<<endl;
	return 0;
}
int fib(int n)
{
	cout<<"processing fib("<<n<<")...";
	if (n<3)
	{
		cout<<"Return 1!\n";
		return (1);
	}
	else
	{
		cout<<"Call fib("<<n-2<<")and fib("<<n-1<<")."<<endl;
		return (fib(n-2)+fib(n-1));
	}
}
	
