#include<iostream>
using namespace std;
int main()
{
	int n=2;
    do
{ 
	  int m=2,k=1;
	  while(m<n)
		{
			if(n%m==0)
			k=0;
			m++;
	    }
	  	if(k==1)
		cout<<n<<endl;
	  n++;
	}
while(n<=100);
	system("pause");
}
