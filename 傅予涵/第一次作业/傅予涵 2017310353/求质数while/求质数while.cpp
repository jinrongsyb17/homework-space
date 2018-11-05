#include <iostream>

using namespace std;

int main() 
{
    int n=2,a=2;
    while(n<100)
    {a=2;
    while((n%a!=0)&&(a<n))
    {a++;
    } 
	if(n==2)
	cout<<" "<<n<<endl;
	//  if(n%a==0)
	//   n++;
	if(a>=n)
	cout<<" "<<n<<endl;
	n++;
	   }
	   return 0;
}
