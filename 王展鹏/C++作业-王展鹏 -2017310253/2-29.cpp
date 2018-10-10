#include<iostream>
using namespace std;
int main()
{
    for(int n=2;n<=100;n++)
	{   int k=1;
		for(int m=2;m<n;m++)
			if(n%m==0)
			k=0;
	  	if(k==1)
		cout<<n<<" ";
	}
	system("pause");
}
