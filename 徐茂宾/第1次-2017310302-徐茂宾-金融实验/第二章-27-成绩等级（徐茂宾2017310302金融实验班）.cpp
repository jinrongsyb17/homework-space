// 第二章-27-成绩等级（徐茂宾2017310302)ࣩ
#include<iostream.h>

void main()
{
int score;
cout<<"你考试考了多少分？"<<endl;
cin>>score;

If(score>=90 && score<=100)
  cout<< "优";
else if(score>=80 && score<0)
  cout<< "良";
else if(score>=60 && score<80)
  cout<< "中";
else if(score>=0 && score<60)v
  cout<< "差";
else
  cout<< "请输入有效的成绩";
}
