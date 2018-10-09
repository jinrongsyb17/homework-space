// 4-10“人员”类.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Date {
public:
	Date(int Year1=1999, int Month1=11, int Day1=11) {
		Year = Year1;
		Month = Month1;
		Day = Day1;
	}
	void Set() {
		cin >> Year >> Month >> Day;
	}
		
	void Show() {
		cout << Year << "年" <<  Month << "月" << Day<< "日"  << endl;
	}
private:
	int Year, Month, Day;
};


class People {
public:
	People() {}
	People(int Number1, char Gender1, int Year1, int Month1, int Day1, int ID1):Birthday(Year1,Month1,Day1) {
		Number = Number1;
		Gender = Gender1;
		ID = ID1;
	}
	void Set() {
		cout << "请输入您的编号：";
		cin >> Number;
		cout << "请输入您的性别：";
		cin >> Gender;
		cout << "请输入您的出生日期：";
		Birthday.Set();
		cout << "请输入您的身份证号：";
		cin >> ID;
	}
	void Show();
	~People() {}
private:
	int Number, ID;
	char Gender;
	Date Birthday;
};


void People::Show(){
	cout << "编号：" << Number <<endl<< "性别：" << Gender <<endl<< "身份证号：" << ID<<endl;
	cout << "出生日期";
	Birthday.Show();
}


int main(){
	People XH;
	XH.Set();
	XH.Show();
	return 0;
}