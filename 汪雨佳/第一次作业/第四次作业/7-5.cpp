// 7-5.cpp
#include "pch.h"
#include <iostream>
using namespace std;

class Shape
{
public:
	Shape() {};
	~Shape() {};
};

class Circle : public Shape
{
public:
	Circle(float r):radius(r){}
	~Circle(){}
	float getArea() { return 3.14*radius*radius; }
private:
	float radius;
};

class Rectangle:public Shape
{
public:
	Rectangle(float l, float w) :len(l), width(w) {};
	~Rectangle() {};
	float getArea() { return len * width; }
private:
	float len;
	float width;
};

class Square:public Rectangle
{
public:
	Square(float l) :Rectangle(l, l) {};
	~Square() {};
};

int main()
{
	Circle a(2);
	cout << "圆的面积为：" << a.getArea() << endl;
	Rectangle b(3, 4);
	cout << "长方形的面积为：" << b.getArea() << endl;
	Square c(5);
	cout << "正方形的面积为：" << c.getArea() << endl;
	return 0;
}




