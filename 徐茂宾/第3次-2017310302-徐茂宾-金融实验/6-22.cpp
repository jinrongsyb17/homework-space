#include<iostream>
#include<string>
using namespace std;

//尾首互换，中间递归
string reverse(const string&s){
    if(s.length()>1)
      return s.substr(s.length()-1,1)+reverse(s.substr(1,s.length()-2))+s.substr(0,1);
    else
      return s; 
}

int main()
{
    string str;
    cout<<"请输入一个字符串："<<endl;
    cin>>str;
    cout<<"这个字符串的倒序是："<<endl;
    cout<<reverse(str);
    return 0;
}