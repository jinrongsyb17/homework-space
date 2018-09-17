// 第二章-29-质数（徐茂宾2017310302金融实验班17）
//
#include<iostream.h>
void main()
{
int a;
int b;
b=1;
for(a=1;a<100;a++)
  for(b=2;b<a;)
    if(a%b==0 && b=a)
	    cout<<b<<"是质数";
    else if(a%b==0)
		break;
    else
	    b=b+1;
}
