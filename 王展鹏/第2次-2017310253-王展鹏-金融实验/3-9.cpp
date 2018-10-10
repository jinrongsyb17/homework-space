#include <iostream>
using namespace std;

int fun1(int i)
{   int k=1;
	for(int j=2;j<i;j++)
	{   
		if (i%j==0)
			k=0;
	}
	return k;
}

int main ()
{
	int i;
	cout<<"请输入一个数："<<endl;
	cin>>i;
	{   if(fun1(i))
		cout<<"这个数是质数"<<endl;
	    else
	    cout<<"这个数不是质数"<<endl;
	  
	}
	  system("pause");
}
