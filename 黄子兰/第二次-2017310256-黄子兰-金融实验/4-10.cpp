#include<iostream>
#include<string>
using namespace std;
class Date{
	public:
		Date(int xyear=0,int xmonth=0,int xday=0){
			year=xyear;
			month=xmonth;
			day=xday;
		} 
		Date(Date&d);
		int getyear(){return year;}
		int getmonth(){return month;}
		int getday(){return day;}
		~Date(){}
	private:
		int year,month,day;
}; 
Date::Date(Date&d){
	year=d.year;
	month=d.month;
	day=d.day;
}
class Stuff{
	public:
		Stuff(long long xnumber, string xsex,long long xID_card,Date xbirthdate);//性别只有0与1； 
		Stuff(Stuff&s);
		long long getnumber(){return number;}
		string getsex(){return sex;}
		long long getID_card(){return ID_card;}
		Date getbirthdate(){return birthdate;}
		~Stuff(){}
	private:
		long long number;
		string sex;
		long long ID_card;
		Date birthdate;
};
Stuff::Stuff(long long xnumber, string xsex,long long xID_card,Date xbirthdate):birthdate(xbirthdate) {
	number=xnumber;
	sex=xsex;
	ID_card=xID_card;
}
Stuff::Stuff(Stuff&s):birthdate(s.birthdate){
	number=s.number;
	sex=s.sex;
	ID_card=s.ID_card;
}
int main(){
	long long number;
	cout<<"Please enter the number : ";
	cin>>number;
	string sex;
	cout<<"Please enter the sex : ";
	cin>>sex;
	long long ID_card;
	cout<<"Please enter the ID_card : ";
	cin>>ID_card;
	int year;
	cout<<"Please enter the birthyear : ";
	cin>>year;
	int month;
	cout<<"Please enter the birthmonth : ";
	cin>>month;
	int day;
	cout<<"Please enter the birthday : ";
	cin>>day;
	Date mydate(year,month,day);
	Stuff Stuff(number,sex,ID_card,mydate);
	cout<<"The number is : "<<Stuff.getnumber()<<endl;
	cout<<"The sex is : "<<Stuff.getsex() <<endl;
	cout<<"The ID_card is : "<<Stuff.getID_card() <<endl;
	cout<<"The birthdate is : "<<mydate.getyear()<<"/"<<mydate.getmonth()<<"/"<<mydate.getday() <<endl;
	return 0;
}
