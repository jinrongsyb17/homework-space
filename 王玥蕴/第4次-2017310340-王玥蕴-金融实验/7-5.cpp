#include<iostream>
using namespace std;
#define PI 3.1415926
class Shape
{
public:
	Shape(float a, float b = 0.0) {
		this->a = a;
		this->b = b;
	}
protected:
	float a, b;
};

class Rectangle : public Shape
{
public:
	Rectangle(float l, float w) :Shape(l, w)
	{
	}
	float getArea() {
		return a*b;
	}
};

class Circle : public Shape
{
public:
	Circle(float r) :Shape(r)
	{
	}
	float getArea()
	{
		return a*PI*PI;
	}
};

class Square: public Rectangle
{
public:
	Square(float l) :Rectangle(l,l)
	{
	}
	float getArea()
	{
		return a*a;
	}
};
void main()
{
	Rectangle r(5, 10);
	Circle c(2.5);
	Square s(5);
	cout << "矩形的面积：" << r.getArea() << endl;
	cout << "圆的面积：" << c. getArea() << endl;
	cout << "正方形的面积：" << s.getArea() << endl;
}
