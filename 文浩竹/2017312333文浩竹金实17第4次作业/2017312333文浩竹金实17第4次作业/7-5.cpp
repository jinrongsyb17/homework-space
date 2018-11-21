#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>
using namespace std;

class Shape {
public:
	double getArea();
private:
	static int count ;
};

class Rectangle :public Shape {
public:
	Rectangle(){}
	Rectangle(double x, double y);
	double getArea();
private:
	double wide, length;
};

Rectangle::Rectangle(double x, double y) :wide(x), length(y) { }

double Rectangle::getArea() {
	return wide * length;
}

class Circle :public Shape{
public:
	Circle(double r);
	double getArea();
private:
	double radius;
};

Circle::Circle(double r):radius(r){}
double Circle::getArea() {
	return M_PI * radius*radius;
}

class Square :public Rectangle {
public:
	Square(double a);
	double getArea();
private:
	double side;
};

Square::Square(double a):side(a){}
double Square::getArea() {
	return side * side;
}

