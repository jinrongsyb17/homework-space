#include<iostream>
#include<string>
using namespace std;
class Date {
	int year;
	int month;
	int day;
public:
	Data() {}
	Data(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	void set() {
		cin >> year >> month >> day;
	}
	void display() {
		cout << year << "年" << month << "月" << day << "日";
	}
};

class Person {
	int num;
	char sex;
	Data birthday;
	char ID[18];
public:
	Person() {}
	Person(int n, int y, int m, int d, char id[18], char s = 'm') :birthday(y, m, d) {}
	Person(Person&p) {}
	void input() {}
	void output() {}
	~Person() {
		cout << " " < num << "号人员已录入完毕" << endl;
	}
};

Person::Person(int n, int y, int m, int d, char id[18], char s = 'm') :birthday(y, m, d) {
	num = n;
	sex = s;
	strcpy(ID, id);
}

Person::Person(Person&p) {
	num = p.num;
	sex = p.sex;
	birthday = p.birthday;
	strcpy(ID, P.ID);
}

Person::void input() {
	cout << "输入数据：" << endl;
	cout << "编号：";
	cin >> num;
	cout << "性别（m/f):";
	cin >> sex;
	cout << "生日日期：";
	birthday.set();
	cout << "身份证号：";
	cin >> ID;
	ID[18] = '\0';
	cout << endl;
}

Person::void output() {
	cout << "编号：" << num << endl;
	cout << "性别：" << sex << endl;
	cout << "生日：";
	birthday.display();
	cout << endl;
	cout << "身份证号：" << ID << endl;
}

int main() {
	Person p1;
	p1.input();
	p1.output();
	return 0;
}