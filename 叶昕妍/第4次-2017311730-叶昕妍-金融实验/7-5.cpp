#include<iostream>
using namespace std;

class Shape {
public:Shape() {};
	   ~Shape() {};
	   double getArea() {};
};
class Rectangle :public Shape {
public:
	Rectangle(double length, double width) :len(length), width(width) {};
	Rectangle() {};
	~Rectangle() {};
	double getArea() { double area = len*width;
	return area;
	}
private:
	double len; double width;
};
class Circle :public Shape {
public:
	Circle(double radius) :r(radius) {};
	~Circle() {};
	double getArea() {
		double area = 3.14*r*r;
		return area;
	}
private:double r;
};
class Square :public Rectangle {
public:Square(double length) :Rectangle(length,length){};
	   ~Square() {};
};

int main() {
	Rectangle rectangle1(3, 4);
	cout << "The area of the rectangle is " << rectangle1.getArea() << endl;
	Circle circle1(2);
	cout << "The area of the circle is " << circle1.getArea() << endl;
	Square square1(3);
	cout << "The area of the square is " << square1.getArea() << endl;
	system("pause");
	return 0;
}