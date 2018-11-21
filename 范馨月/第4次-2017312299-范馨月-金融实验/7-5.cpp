#include<iostream>

using namespace std;

class Shape {

};

class Rectangle:public Shape {
public:
	Rectangle();
	Rectangle(double length, double width);
	double getArea();
private:
	double length;
	double width;
};

Rectangle::Rectangle(double length, double width) {
	this->length = length;
	this->width = width;
}

Rectangle::Rectangle() {

}

double Rectangle::getArea() {
	return length * width;
}

class Circle :public Shape{
public:
	Circle();
	Circle(double radius);
	double getArea();
private:
	double radius;
	const double PI  = 3.14159;
};

Circle::Circle(double radius) {
	this->radius = radius;
}

Circle::Circle() {

}

double Circle::getArea() {
	return PI * radius*radius;
}

class Square :public Rectangle {
public:
	Square(double width);
	double getArea();
private:
	double width;
};

Square::Square(double width) {
	this->width = width;
}

double Square::getArea() {
	return width * width;
}

int main() {
	Rectangle a(4, 5);
	Circle b(6);
	Square c(5);

	cout << "The area of three shapes are: " << a.getArea() << "  " << b.getArea() << "  " << c.getArea();
	system("pause");
	return 0;
}