#include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"你考试考了多少分？（0-100）"<<endl;
   cin>>n;
   if(n>=90&&n<=100)
	   cout<<"优"<<endl;
   if(n>=80&&n<90)
	   cout<<"良"<<endl;
   if(n>=60&&n<80)
	   cout<<"中"<<endl;
   if(n>=0&&n<60)
	   cout<<"良"<<endl;
}
