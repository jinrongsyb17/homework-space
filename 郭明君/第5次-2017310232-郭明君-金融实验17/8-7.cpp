// 8-7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class Point
{
public:
	Point&operator++();
	Point operator++(int);

	Point&operator--();
	Point operator--(int);

	Point() { _x = _y = 0; }

	int x() {
		return _x
			;
	}
	int y() {
		return _y
			;
	}
private:
	int _x, _y;
};
Point&Point::operator++()            //前置操作符 
{
	_x++;
	_y++;
	return*this;
}
Point Point::operator++(int)         //后置操作符 
{
	Point temp = *this;
	++*this;
	return temp;
}
Point& Point::operator--()
{
	_x--;
	_y--;
	return*this;

}
Point Point::operator--(int)
{
	Point temp = *this;
	--*this;
	return temp;
}
int main() {
	Point a;
	cout << "a的值为：" << a.x() << "," << a.y() << endl;
	a++;
	cout << "a的值为：" << a.x() << "," << a.y() << endl;
	++a;
	cout << "a的值为：" << a.x() << "," << a.y() << endl;
	a--;
	cout << "a的值为：" << a.x() << "," << a.y() << endl;
	--a;
	cout << "a的值为：" << a.x() << "," << a.y() << endl;
	return 0;
}
