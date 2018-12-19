#include <iostream>
using namespace std;
class date {
public:
	date(int x = 0, int y = 0, int z = 0) {
		year = x, month = y, day = z;

	}
	date(date&d);
	void setdate();
	void showdate();
private:
	int year;
	int month;
	int day;

};
date::date(date&d) {
	year = d.year;
	month = d.month;
	day = d.day;

}
void date::setdate() {
	int a, b, c;
	cout << "输入日期";
	cin >> a >> b >> c;
	year = a;
	month = b;
	day = c;

}
void date::showtime() {
	cout << year << "年" << month << "月" << "日";

}

class people {
public:
	people(date bd, long int nb, int idnb, char sx);
	people(people&p);
	void setpeople();
	void showpeople();
private:
	int number, idnumber;
	char sex;
	date birthday;

}

people::people(date bd, long int nb = 0, long int idnb = 0, char sx ='m'):birthday(bd){
	birthday = bd;
	number = nb;
	idnumber = idnb;
	sex = sx;

}
people::people(people&p) :birthday(p.birthday) {
	number = p.number;
	birthday = p.birthday;
	sex = p.sex;
	idnumber = p.idnumber;
}
void people::setpeople() {
	date a;
	long int b.c;
	char d;
	a.setdate();
	cout << "号码";
	cin >> b;
	cout << "id";
	cin >> c;
	cout << "性别";
	cin >> d;
	cout << endl;
	birthday = a;
	number = b;
	idnumber = c;
	sex = d;

}
void people::showpeople() {
	cout << "number" << number << endl;
	cout << "idnumber" << number << endl;
	cout << "sex" << sex << endl;
	cout << "birthday;
		birthday.showtime();


}
 
int main() {
	date b;
	b.setdate();
	people p1(b);
	p1.setpeople();
	people p2(p1);
	p1.showpeople();
	system("pause");
	return 0;
}