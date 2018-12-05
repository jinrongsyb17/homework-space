// 7-5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Shape {
public:
	Shape(){}
	~Shape(){}
	virtual float getArea() { return -1; }
};
class Circle :public Shape
{public:
	Circle(float radius):itsRadius(radius){}
	~Circle(){}
	float getArea() { return 3.14*itsRadius*itsRadius; }
private:
	float itsRadius;

};
class Rectangle:public Shape
{public:
	Rectangle(float len, float width) :itslength(len), itswidth(width) {};
	~Rectangle() {}
	virtual float getArea() { return itslength*itswidth; }
	virtual float getlength() { return itslength; }
	virtual float getwidth() { return itswidth; }
private:
	float itslength;
	float itswidth;

};
class Square :public Rectangle
{
public:Square(float len);
	   ~Square() {}
};
Square::Square(float len) :
	Rectangle(len, len){}
int main()
{
	Shape *sp;
	sp = new Circle(5);
	cout << "The area of the Circle is " << sp->getArea() << endl;
	delete sp;
	sp = new Rectangle(5, 6);
	cout << "The area of the Rectangle is " << sp->getArea() << endl;
	delete sp;
	sp = new Square(4);
	cout << "The area of the Square is " << sp->getArea() << endl;
	delete sp;


    return 0;
}

