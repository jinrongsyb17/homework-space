#include<iostream.h>

class Date{
public:
	    int year,month,day;
		Date(){}
		Date(int y,int m,int d)
		{
			year=y;month =m;day=d;
		}
};
enum SEX{MALE,FEMAL};
class Person{
private:
	    int ID;
		SEX sex;
		Date birthday;
		char* IDCard;
public:
	   Person(int ID,SEX sex, int y,int m, int d,char* IDCard):birthday(y,m,d){
		       this->ID=ID;
			   this->sex=sex;
			   this->IDCard=IDCard;
	   }
	   Person(Person& p){
		       this->ID=p.ID;
			   this->sex=p.sex;
			   Date tdate(p.birthday.year,p.birthday.month,p.birthday.day);
			   this->=birthday=tdate;
			   this->=IDCard=p.IDCard;
	   }
	   -Person(){}
	   inline void setID(int ID){this->ID=ID;}
	   inline void setSex(SEX sex){this->=sex=sex;}
	   inline void setDate(int y, int m, int d){
		       birthday.year=y;
			   birthday.month=m;
			   birthday.day=d;
	   }
	   inline void setIDCard(char* IDCard){this->IDCard=IDCard;}
	   void Show(){
		   printf_s("ID:%d\nSex: %s\nBirthday: %d-%d-%d\nIDCard: %s\n",ID,0?"male":"female",birthday.year,birthday.month,birthday.day,IDCard);
	   }
};

int _tmain(int argc,_TCHAR* argv[]){
	    Person p(69, MALE,2000,12,4,"23211323");
		p.show();
		system("pause");
		return 0;
}