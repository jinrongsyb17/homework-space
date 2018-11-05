#include<iostream>
#include<string>
using namespace std;

class Date
{
private:
 int year,month,day;
public:
 void SetDate(int Y=0,int M=0,int D=0);
 void ShowDate();
};

inline void Date::SetDate(int Y,int M,int D)
{
 cin>>Y>>M>>D;
 year=Y;
 month=M;
 day=D;
}

inline void Date::ShowDate()
{
 cout<<year<<"-"<<month<<"-"<<day<<endl;
}

class Personnel
{
private:
 int num;
 char sex;
 Date birthday;
 string ID;
public:
 Personnel(){}
 Personnel(int n,char s,Date b,string id)
 {
  num=n;
  sex=s;
  birthday=b;
  ID=id;
 }
 Personnel (Personnel &p);
 ~Personnel()
 {
  cout<<"已录入完毕。"<<endl;
 }
 void SetPersonnel();
 void ShowPersonnel();
};

Personnel::Personnel (Personnel &p)
{
 num=p.num;
 sex=p.sex;
 birthday=p.birthday;
 ID=p.ID;
}

void Personnel::SetPersonnel()
{
 cout<<"录入人员信息："<<endl;
 cout<<"请输入人员编号："<<endl;
 cin>>num;
 cout<<"请输入人员性别（以m代表男性，以f代表女性）："<<endl;
 cin>>sex;
 cout<<"请输入人员出生日期："<<endl;
 birthday.SetDate();
 cout<<"请输入人员身份证号："<<endl;
 cin>>ID;
}

void Personnel::ShowPersonnel()
{
 cout<<"人员编号:"<<num<<endl;
 cout<<"人员性别"<<sex<<endl;
 cout<<"人员出生日期:";
 birthday.ShowDate();
 cout<<"人员身份证号:"<<ID<<endl;
}

int main()
{
 int flag=1;
 while(flag)
 {
 Personnel per;
 per.SetPersonnel();
 per.ShowPersonnel();
 cout<<"继续输入“y”，结束输入“n”："<<endl;
 char c;
 cin>>c;
 if(c=='N'||c=='n') flag=0;
 }
 return 0;
}
