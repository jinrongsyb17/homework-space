#include<iostream>
using namespace std;
class Date
{
public:
	Date(int yy,int mm, int dd);
	Date() { year = 1999; month = 12; day = 31; };
	~Date() {};
	void showDate();
	Date(Date &d);
private:
	int year, month, day;
};
Date::Date(int yy, int mm, int dd)
{
	if ((mm > 12) || (dd > 31))
	{
		cout << "Out of range." << endl;
	}
	else {
		year = yy;
		month = mm;
		day = dd;
	}
}
inline void Date::showDate() 
{
	cout << year << "Äê" << month<< "ÔÂ" << day << "ÈÕ" << endl;

}
Date::Date(Date &d)
{
	year = d.year;
	month = d.year;
	day = d.day;
}
class stuff
{
public:
	stuff(Date bir,unsigned int num,char gen,long long int IDnum);
	~stuff() {};
	stuff(stuff &s);
	void show();

private:
	unsigned int code;
	char gender;
	Date birth;
	long long int ID;
};

stuff::stuff(Date bir=Date(1999,12,31), unsigned int num=2017310454, char gen='F',  long long int IDnum=110101199912310000)
{
	code=num ;
	gender = gen;
	birth = bir;
	ID = IDnum;
}

stuff::stuff(stuff &s):code(s.code),gender(s.gender),birth(s.birth),ID(s.ID)
{
	code = s.code;
	gender = s.gender;
	birth = s.birth;
	ID = s.ID;
}

void stuff::show()
{
	cout << "Code: " << code << endl;
	cout << "Gender: " << gender << endl;
	cout << "Birth Date: ";
	birth.showDate();
	cout << ID << endl << endl;
}
int main() 
{
	stuff st1;
	st1.show();

	stuff st2(Date(1999,7,14),316552,'M',110101199907140528);
	st2.show();

	stuff st3(st2);
	st3.show();

	system("pause");
	return 0;
}