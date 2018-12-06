#include<iostream>
using namespace std;
class Fraction						//数类；
{
	friend ostream& operator<<(ostream& out, const Fraction& x);
private:
	int den;						//加的步进距离，使自加的距离不是1；
	int num;						//数（初值）
public:
	Fraction(int d = 1, int n = 0) :den(d), num(n) {}
	Fraction& operator--()			//前缀++重载（前置版本prefix）
	{
		num -= den;					//先自增，再返回；
		return *this;
	}
	const Fraction operator--(int)	//后缀++重载（后置版本postfix）
	{
		Fraction old(*this);		//拷贝构造。先返回，再自增。
		--(*this);					//调用的是重载的前置版本；
		return old;
	}
};

ostream& operator<<(ostream& out, const Fraction& x)
{
	out << x.num << endl;
	return out;
}

int main(void)
{
	Fraction b(30, 15);
	cout << b-- << endl;
	cout << --b << endl;

	return 0;
}