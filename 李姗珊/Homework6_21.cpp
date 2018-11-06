#include<string>
#include<iostream>
using namespace std;


unsigned int countLetter(string s){
    int count=0;
    for(int i=0;i<s.length();i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
            count++;
        }
    }
    return count;
}
int main(){
    cout<<"输入一个英文句子"<<endl;
    string str;
    getline(cin,str);
    cout<<"句子 "<<str<<"中含有"<<countLetter(str)<<"个字母"<<endl;
    return 0;
}



