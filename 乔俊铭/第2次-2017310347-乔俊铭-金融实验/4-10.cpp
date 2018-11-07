#include<iostream>
using namespace std;
class date {
private:
	int year;
	int month; 
	int day;
public:
	date(int y=1999, int m=12, long long int d=31) {
		year = y;
		month = m;
		day = d;
	}
	void set()
	{
		cin >> year >> month >> day;
	}
	void display() {
		cout << year << "年" << month << "月" << day << "日" << endl;
	}
};

class person {
private:
	int num;
	char sex;
	date birthday;
	long long int ID;

public:
	person() {};
	person(int n,long long int id, char s, date birth)
	{
		num = n;
		sex = s;
		ID = id;
		birthday = birth;
	}
	~person() {}
	person(person &p);

	void show();
	void set(int n,long long int id, char s, date birth);
};
inline void person::show() {
	cout << "编号:" << num << endl;
	cout << "性别:" << sex<< endl;
	cout << "身份证号:" << ID << endl;
	cout << "出生日期:";
	birthday.display();
}
inline void person::set(int n,long long int id, char s, date birth) {
	num = n;
	sex = s;
	ID = id;
	birthday = birth;
}
person::person(person &p) :num(p.num), ID(p.ID), sex(p.sex), birthday(p.birthday) 
{
	num = p.num;
	sex = p.sex;
	ID = p.ID;
	birthday = p.birthday;
}
int main() {
	date zhang1(1999, 01, 01);
	person zhang2(25, 230303199901010101, 'm', zhang1);
	zhang2.show();
	return 0;
}