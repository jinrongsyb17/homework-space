#include<iostream>
using namespace std;

class Shape {
public:
	virtual double getArea() = 0;
	virtual double getPerim() = 0;
	virtual int getVertexCount() const = 0;
};


class Rectangle :public Shape {
public:
	Rectangle() {
		x = 0;
		y = 0;
	}
	Rectangle(double inputX, double inputY) {
		x = inputX;
		y = inputY;
	}
	double getArea() {
		return x * y;
	}
	double getPerim() {
		return 2 * (x + y);
	}
	int getVertexCount() const {
		return 4;
	}
private:
	double x = 0;
	double y = 0;
};

class Circle :public Shape {
public:
	Circle(double inputR) {
		radius = inputR;
	}
	double getArea() {
		return PI * radius*radius;
	}
	double getPerim() {
		return 2 * PI*radius;
	}
	int getVertexCount() const {
		return 0;
	}
private:
	double radius;
	double const PI = 3.141592;
};

class Square :public Rectangle {
public:
	Square(double inputX) {
		x = inputX;
	}
	double getArea() {
		return x * x;
	}
	double getPerim() {
		return 4 * x;
	}
private:
	double x;
};


int main() {
	Circle a(3);
	Rectangle b(5, 7);
	Square c(4);
	cout << "a: " << a.getVertexCount() << endl;
	cout << "b: " << b.getVertexCount() << endl;
	cout << "c: " << c.getVertexCount() << endl;

	system("pause");
	return 0;
}