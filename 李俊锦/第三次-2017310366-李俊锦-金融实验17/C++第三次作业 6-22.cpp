#include<iostream>
#include<string>
using namespace std;
string reverse(const string&s){
    if(s.length()>1)
      return s.substr(s.length()-1,1)+reverse(s.substr(1,s.length()-2))+s.substr(0,1);
    else
      return s;
}
int main()
{
    string str;
    cout<<"ÊäÈëÒ»¸ö×Ö·û´®£º"<<endl;
    cin>>str;
    cout<<"¸Ã×Ö·û´®µÄµ¹ĞòÊÇ£º"<<endl;
    cout<<reverse(str);
    return 0;
}
