#include <iostream>
using namespace std;
int main()
{
  const int m=66;
  int n;
 do
  {
  cout<<"请猜一个一个1-100的数"<<endl;
  cin>>n;
  if (n>m)
	  cout<<"你猜的这个数太大啦"<<endl;
  else if (n<m)
	  cout<<"你猜的这个数太小啦"<<endl;
  else 
	  cout<<"恭喜，猜对啦！"<<endl;
  }
    while (m!=n);
system("pause");
}
