#include<iostream>
using namespace std;
class Date {
public:
	unsigned long bornDate;
	Date();
	Date(unsigned long date) {
		bornDate = date;
	}
	Date(Date&d);
	~Date() {}
};
inline Date::Date(Date&d) {
	bornDate = d.bornDate;
}

class personnel {
public:
	unsigned long number;
	unsigned long idNumber;
	Date born;
	string gender;
	personnel() {
	}
	personnel(Date newd, unsigned long newN = 0, string newG = "", unsigned long newI = 0);
	//组合类的复制构造函数(内联成员函数)
	personnel(personnel&p) :born(p.born) {
		number = p.number;
		idNumber = p.idNumber;
		gender = p.gender;
		born = p.born;
	}
	//信息录入
	void setnumber(unsigned long n) {
		number = n;
	}
	void setidNumber(unsigned long k) {
		idNumber = k;
	}
	void setGender(string s) {
		gender = s;
	}
	void setDate(unsigned long d) {
		born.bornDate = d;
	}

	//信息显示
	unsigned long getNumber() {
		return number;
	}
	string getGenger() {
		return gender;
	}
	unsigned long getidNumber() {
		return idNumber;
	}
	unsigned long getBornDate() {
		return born.bornDate;
	}
	//组合类的析构函数
	~personnel() {
		cout << "析构函数调用：程序运行结束" << endl;
	}
};
//构造函数的类外实现
personnel::personnel(Date newd, unsigned long newN, string newG, unsigned long newI) :born(newd) {
	number = newN;
	gender = newG;
	idNumber = newI;
}
//主函数测试程序
int main() {
	unsigned long i;
	unsigned long l;
	unsigned long o;
	string s;
	cout << "输入编号" << endl;
	cin >> i;
	cout << "输入性别：male or female" << endl;
	cin >> s;
	cout << "输入出生日期（例：1998年3月16日——19980316）" << endl;
	cin >> l;
	cout << "输入身份证号：（例：500199803167654）" << endl;
	cin >> o;
	Date date(l);
	personnel p(date, i, s, o);
	cout << "编号为" << p.getNumber() << endl;
	cout << "性别是 " << p.getGenger() << endl;
	cout << "出生日期为 " << p.getBornDate() << endl;
	cout << "身份证号是：" << p.getidNumber() << endl;
	return 0;
}