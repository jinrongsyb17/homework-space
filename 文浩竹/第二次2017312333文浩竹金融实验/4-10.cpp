#include<iostream>
#include<string>
using namespace std;

class Date {
public:
	Date(int newY, int newM, int newD);
	void setDate(int newY,int newM,int newD);
	string showDate();
private:
	int year;
	int month;
	int day;
};
Date::Date(int newY, int newM, int newD){
	year = newY;
	month = newM;
	day = newD;
}
 void Date::setDate(int newY, int newM, int newD) {
	 year = newY;
	 month = newM;
	 day = newD;
}
 string Date::showDate() {
	 cout<<  year<<"年"<<month<<"月"<<day<<"日"<<endl ;
	 return "";
 }
class Stuff {
public:
	Stuff(int num, string sex,Date birth, int id);
	void setNumber(int newNum) {
		number = newNum;
	};
	string showNumber();
	void setSex(string newSex = "男");
	string showSex();
	void setID(int newId) {
		id = newId;
	}
	int showID();
	Stuff(Stuff&s);
	~Stuff(){}
private:
	int number;
	string sex;
	Date birth;
	int id;
};

Stuff::Stuff(int newNum, string newSex, Date newBirth, int newId): birth(newBirth){
	number = newNum;
	sex = newSex;
	id = newId;
}
string Stuff::showNumber() {
	cout << number << endl;
	return "";
}

void Stuff::setSex(string newSex) {
	sex = newSex;
}

string Stuff::showSex() {
	cout << "性别为" << sex << endl;
	return "";
}

int Stuff :: showID() {
	cout << "ID为" << id << endl;
	return 0 ;
}
Stuff::Stuff(Stuff&s) :birth(s.birth){
	number = s.number;
	sex = s.sex;
	id = s.id;
}

int main() {
	Date birth1(1999, 8, 17);
	Stuff Bamboo(201731233, "男", birth1, 440183);
	Bamboo.showID();
	Bamboo.showSex();
	birth1.showDate();
	system("pause");
	return 0;
}