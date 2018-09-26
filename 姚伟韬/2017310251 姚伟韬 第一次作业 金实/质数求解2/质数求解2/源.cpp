//质数求解.cpp
#include<iostream>
using namespace std;
int main(){
	int x,i,n=100;
	for( i=1;i<=n;i++)
	{for(x=2;x<i;x++)
	  if(i!=x&&i%x==0)
		  break;
	  if(i==x)
		  cout<<i<<' ';
	}
	system("pause");
	return 0;	
	}
