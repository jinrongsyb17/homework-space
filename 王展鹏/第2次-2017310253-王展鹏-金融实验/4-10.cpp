#include <iostream>
using namespace std;

class Date
{
public:
	Date(int x,int y,int z)  //构造函数
	{
		year=x;
		month=y;
		date=z;
	}
	Date(Date&p)             //复制构造函数
	{
		year=p.year;
		month=p.month;
		date=p.date;
	}
	int getYear(){return year;}    //内联成员函数
	int getMonth(){return month;}  //内联成员函数
	int getDate(){return date;}    //内联成员函数
	~Date(){}                //析构函数

private:
	int year,month,date;
};

class People
{
private:
	int num,id;
	char sex;
	Date p1;                                    //类的组合

public:
	People(int num,int id,char sex,Date p);   //构造函数
	People(People & l);                       //复制构造函数
	
	void show()                               //内联成员函数——显示成员信息
	{
		cout<<"编号为："<<num<<endl;
		cout<<"性别为："<<sex<<endl;
		cout<<"身份证为："<<id<<endl;
		cout<<"出生日期为："<<p.getYear<<"年"<<p.getMonth<<"月"<<p.getDate<<"日"<<endl;
	}
};
//组合类的构造函数的实现
	People::People(int num,int id,char sex,Date p):p1(p)
	{

	}

//组合类的复制构造函数的实现
	People::People(People&l):p1(l.p1)
	{

	}