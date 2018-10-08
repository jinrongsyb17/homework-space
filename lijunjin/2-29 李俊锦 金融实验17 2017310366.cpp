#include<iostream>
using namespace std;
void main()
{
    int a,b;
    cout<<2<<",";           //added new
    for(a=2;a<=100;a++)
    {
        for(b=2;b<a;b++)
            if(a%b==0)
                break;
            else
            {
                cout<<a<<",";
                break;      //added new
            }
    }
    system("pause");
}
