// ConsoleApplication22.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
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
Point&Point::operator++()            
{
	_x++;
	_y++;
	return*this;
}
Point Point::operator++(int)         
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