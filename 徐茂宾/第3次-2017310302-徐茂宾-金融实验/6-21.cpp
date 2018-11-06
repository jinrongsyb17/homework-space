#include<iostream>
#include<cstdio>
using namespace std;

int countletter(const char *a){
    int count=0;
    for(int i=0;a[i];i++){
        if(a[i]<='z' && a[i]>='a'||a[i]<='Z' && a[i]>='A')
            count++;
    }
    return count;
}

int main()
{
    char sentense[100];
    cout<<"请输入一个英文句子："<<endl;
    gets(sentense);
    cout<<"这个句子中有"<<countletter(sentense)<<"个字母。";
}