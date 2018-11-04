// 第二章-32-猜数（徐茂宾2017310302金融实验班17）

//while语句
#include<iostream.h>
void main()
{
int a;
int b;
b=36;
cout<<"请你猜一个0-100之间的整数！";
cin>>a;

while (a!=b)
  if(a>b)
     cout<< "你猜的太大了！";
  else if(a<b)
     cout<< "你猜的太小了！";
  else
     cout<< "你猜对了！";
}


//do while语句
#include<iostream.h>
void main()
{
int a;
int b=36;
cout<<"请你猜一个0-100之间的整数！";
cin>>a;

do{
  if(a>b)
     cout<< "你猜的太大了！";
  else if(a<b)
     cout<< "你猜的太小了！";
  else
     cout<< "你猜对了！";
}while(a!=b);
}
