#include<iostream>
using namespace std;

class Shape {
public:
	virtual double getArea() = 0;
	virtual double getPerim() = 0;
	int getVertexCount() const;
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
		return 2*(x + y);
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
		return 4*x;
	}
private:
	double x;
};

int Shape::getVertexCount() const {
	Rectangle *ptr = dynamic_cast<Rectangle*>(const_cast<Shape*>(this));
	if (ptr != 0)
		return 4;
	else if (dynamic_cast<Circle*>(const_cast<Shape*>(this)) != 0)
		return 0;
}

int main() {
	Circle a(3);
	Rectangle b(5, 7);
	Square c(4);
	cout << "a: " << a.getVertexCount()<<endl;
	cout << "b: " << b.getVertexCount() << endl;
	cout << "c: " << c.getVertexCount() << endl;

	system("pause");
	return 0;
}