#include<iostream>
using namespace std;
int gcd(int a,int b);
int mul(int a,int b);
void main()
{
    int a,b,c,d;
    cout<<"Please input a and b:";
    cin>>a>>b;
    c=gcd(a,b);
    d=mul(a,b);
    cout<<"最大公约数为："<<c<<"最小公倍数为："<<d<<endl;
}
int gcd(int a,int b)
{
    int i,j,k;
    if(a>=b)
        j=a;
    else
        j=b;
    for(i=j;i>=1;i--){
        if(a%i==0&&b%i==0)
        {
            k=i;
            break;
        }
    }
    return k;
}
int mul(int a,int b)
{
    int o,p,q;
    if(a>=b)
        p=b;
    else
        p=a;
    for(o=p;o>=1;o--){
        if(a%o==0&&b%o==0)
        {
            q=o;
            break;
        }
    }
    return (a*b)/q;
}