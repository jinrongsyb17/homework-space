#include<iostream>
#include<string>
using namespace std;
int f(string sentence)
{   
   int n=0;
   int len=sentence.length();
   for(int p=0;p<len;p++)
	{
	 if((sentence[p]>='A'&&sentence[p]<='Z')||(sentence[p]>='a'&&sentence[p]<='z'))
	 n++;
    }
    return n;
}

int main(){
	string sentence;
	cout<<"请输入一句英文："<<endl;
	 getline(cin,sentence);
	 cout<<"该句有"<<f(sentence)<<"个字母。"<<endl;
	 return 0;
	 }
