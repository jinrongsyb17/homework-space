#include<string>
#include<iostream>
using namespace std;

//递归算法求倒序的字符串
string daoXu(string s){
    if(s.length()==1){
        return s;
    }
    return s[s.length()-1]+daoXu(s.substr(0,s.length()-1));
}

//应题目要求使用void方法
void reverse(string &s){
    if(s.length()==1){
        return ;
    }
    s=daoXu(s);
}
//主函数测试
int main(){
    cout<<"输入一个字符串"<<endl;
    string str;
    getline(cin,str);
    cout<<"字符串 "<<str<<"倒序之后为"<<endl;
    reverse(str);
    cout<<str<<endl;
    return 0;
}


//测试结果：
//输入一个字符串
//Program ended with exit code: 0i love programming
//字符串 i love programming倒序之后为
//gnimmargorp evol i



