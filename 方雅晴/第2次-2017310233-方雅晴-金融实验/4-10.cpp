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
	Date(int y = 1999, int m = 1, int d = 10);
	void set()
	{
		cin >> year >> month >> day;
	}
	void display()
	{
		cout << year << "/" << month << "/" << day;
	}
};
Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
class Person
{
private:
	int num;
	char sex;
	Date birthday;
	char ID[18];
public:
	Person() {}
	Person(int n, int y, int m, int d, char id[18], char s = 'm') :birthday(y, m, d)
	{
		num = n;
		sex = s;
		strcpy_s(ID, id);
	}
	Person(Person& p)
	{
		num = p.num;
		sex = p.sex;
		birthday = p.birthday;
		strcpy_s(ID, p.ID);
	}
	void input()
	{
		cout << "录入数据：" << endl;
		cout << "编号：";
		cin >> num;
		cout << "性别(m/f)：";
		cin >> sex;
		cout << "生日：";
		birthday.set();
		cout << "身份证号：";
		cin >> ID;
		ID[18] = '\0';
		cout << endl;
	}
	inline void output();

	~Person()
	{
		cout << " " << num << "号人员已经录入" << endl;
	}
};
inline void Person::output()
{
	cout << "编号：" << num << endl;
	cout << "性别：" << sex << endl;
	cout << "生日：";
	birthday.display();
	cout << endl;
	cout << "身份证号：" << ID << endl;
}
int main()
{
	Person p1;
	p1.input();
	p1.output();
	system("pause");
	return 0;
}