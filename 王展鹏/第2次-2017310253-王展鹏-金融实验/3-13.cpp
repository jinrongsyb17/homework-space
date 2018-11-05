#include <iostream>
using namespace std;

int f(int n)
{   int k=1;
	if(n==1||n==2)
	  k==1;
	else 
	  k=f(n-1)+f(n-2);
	return k;
}

int main()
{   
	int n;
	cout<<"请输入级数n"<<endl;
	cin>>n;
	cout<<"结果为："<<f(n)<<endl;

	system("pause");
}