#include <iostream>

using namespace std;

int main() 
{
    int n=2,a;
    do
    {a=1;
    do
    {a++;
    } while((n%a!=0)&&(a<n));//&&

	if(n==2)
	cout<<" "<<n<<endl;
	//  if(n%a==0)
	//   n++;
	if(a==n)
	cout<<" "<<n<<endl;
	n++;
	   }while(n<100);
	   return 0;
}
