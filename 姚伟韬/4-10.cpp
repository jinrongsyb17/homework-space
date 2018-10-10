#include <iostream>
#include <string>
using namespace std;
class Date 
{
private:
int year;
int month;
int day;
public:
Date(){} 
Date(int y,int m,int d) 
{
year=y;
month=m;
day=d;
}
void set()
{
cin>>year>>month>>day;
}
void display() 
{
cout<<year<<"年"<<month<<"月"<<day<<"日";
}
};
class Person 
{
private:
int num;
char sex;
Date birthday;
char ID[18];
public:
Person(){} 
Person(int n,int y,int m,int d,char id[18],char s='m'):birthday(y,m,d)
{
num=n;
sex=s;
strcpy(ID,id);
}
Person(Person& p) 
{
num=p.num;
sex=p.sex;
birthday=p.birthday;
strcpy(ID,p.ID);
}
void input()
{
cout<<"录入数据："<<endl;
cout<<"编号：";
cin>>num;
cout<<"性别(m/f)：";
cin>>sex;
cout<<"生日：";
birthday.set();
cout<<"身份证号：";
cin>>ID;
ID[18]='\0';
cout<<endl;
}
void output() 
{
cout<<"编号："<<num<<endl;
cout<<"性别："<<sex<<endl;
cout<<"生日：";
birthday.display();
cout<<endl;
cout<<"身份证号："<<ID<<endl;
}
~Person() //析构函数
{
cout<<" "<<num<<"号人员已经录入"<<endl;
}
};
int main()
{
Person p1;
p1.input();
p1.output();
return 0;
}