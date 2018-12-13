// 8-7 Point重载.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Point{
public:
	Point(double x1 = 0.0, double y1 = 0.0) :x(x1), y(y1){};
	void display()const;
	Point & operator ++();
	Point & operator ++(int);
	Point & operator --();
	Point & operator --(int);

private:
	double x, y;
};

	void Point::display() const{
		cout << "(" << x << ", " << y << ")" << endl;
	}

	Point & Point :: operator++(){
		y++;
		return *this;
	}

	Point &Point :: operator++(int){
		x++;
		return *this;
	}

	Point & Point :: operator--(){
		y--;
		return *this;
	}

	Point & Point :: operator--(int){
		x--;
		return *this;
	}

	int main(){
		Point a(1, 2);
		cout << "a = ";
		a.display();
		Point a1(1, 2);
		a1++;
		cout <<"a++ = ";
		a1.display();
		Point a2(1, 2);
		++a2;
		cout<<"++a = ";
		a2.display();
		Point a3(1, 2);
		a3--;
		cout << "a-- = ";
		a3.display();
		Point a4(1, 2);
		--a4;
		cout<<"--a = ";
		a4.display();
		return 0;
	}
