#include<iostream>
#include<string>
using namespace std;
class Data {
public:
	Data(int y, int m, int d);
	Data() {};
	void setData();
	void showData();
private:
	int year;
	int month;
	int day;
};
Data::Data(int y, int m, int d) {
	year = y;
	month = m;
	day = y;
}
void Data:: setData() {
	cin >> year >> month >> day;
}
void Data::showData() {
	cout << year << "年" << month << "月" << day << "日" << endl;
}
Data birthday;
class People
{
public://外部接口
	People(int NewNumber, char NewSex, int y, int m, int d, string NewID);//构造函数
	People() {}
	~People() {}//析构函数，
	People(People &p);//拷贝函数
	void input();//输入人员信息
	void output();//输出人员信息
private://私有接口
	int Number;
	char Sex;
	Data birthday;
	string ID;

};
People::People(int NewNumber, char NewSex, int y, int m, int d, string NewID) :birthday(y, m, d) //构造函数
{
	Number = NewNumber;
	Sex = NewSex;
	ID = NewID;

}

void People::input()//输入相关人员的信息
{
	cout << "请输入相关人员的信息：" << endl;
	cout << "编号： ";
	cin >> Number;
	cout << "性别： ";
	cin >> Sex;
	cout << "生日： ";
	birthday.setData;
	cout << "ID号： ";
	cin >> ID;
	cout << "\n" << endl;

}
inline void People::output()//内联成员函数
{
	cout << "编 号**性别**出 生 年 月**身 份 证 号*******" << endl;
	cout << " " << Number << " " << Sex << " " <<birthday.showData << " " << ID << endl;

}
People::People(People &p)//拷贝函数
{
	Number = p.Number;
	Sex = p.Sex;
	birthday = p.birthday;
	ID = p.ID;
	cout << "拷贝函数被调用！！" << endl;

}int main()
{
	People p;
	p.input();//输入人员信息
	p.output();//输出人员信息
	return 0;

}
