#include <iostream>
using namespace std;
class data{                         
public:
  data(int y=0,int m=0,int d=0)  
  {
 year=y;
 month=m;
 day=d;
  }
  data(data &mybirthday);
  int gety() {return year;}
  int getm() {return month;}
  int getd() {return day;}
  void ouput(){cout<<"  年： "<<year<<"  月： "<<month<<"  日： "<<day<<endl;}
private:
  int year;
  int month;
  int day;
};
data::data(data &mybirthday)    
{
   year=mybirthday.year;
   month=mybirthday.month;
   day=mybirthday.day;
 
}


class people{               
public:                        
  people(int n,char s,int i,data b);
  people(people &liming);
  void input();
  void output();
private:
   int number;
   char sex;
   int id;
   data birthday;            
};

people::people(int n,char s,int i,data b):number(n),sex(s),id(i),birthday(b)
{
 
}
people::people(people &liming):number(liming.number),sex(liming.number),id(liming.id)
{
 
}
void people::output()
{
  cout<<"编号："<<number<<"  性别： "<<sex<<"  身份证号： "<<id;
  birthday.ouput();
}

int main()
{
 data mybirthday(1989,07,07);
 people  zhaoxiaojun(10051030,'m',62202402,mybirthday);
 cout<<"my information is:"<<endl;
 cout<<"m is man，f is woman"<<endl;
 zhaoxiaojun.output();
 return 0;
}
