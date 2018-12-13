#define _USE_MATH_DEFINES
#include<iostream>
#include<math.h>
using namespace std;

class Shape {
public:
	virtual void getArea() {};
	virtual void getPerim() {};
	int getVertexCount() ;
};
int Shape::getVertexCount() {

}
class Rectangle :public Shape {
public:
	void getArea()const;
	void getPerim()const;

private:
	double s;
	double h;
};
void Rectangle::getArea()const {
	cout << "rectangle area=" << (s * h) << endl;
}
void Rectangle::getPerim()const {
	cout << "rectangle area=" << (s * 2 + h * 2) << endl;
}

class Circle :public Shape {
public:
	void getArea()const;
	void getPerim()const;
private:
	double r;
};
void Circle::getArea()const {
	cout << "circle area=" << (M_PI*r*r) << endl;
}
void Circle::getPerim()const {
	cout << "circle area=" << (2 * r*M_PI) << endl;
}
class Square :public Rectangle {
public:
	void getArea()const;
	void getPerim()const;

private:
	double a;
};
void Square::getArea()const {
	cout << "square area=" << (a*a) << endl;
}
void Square::getPerim()const {
	cout << "square area=" << (4 * a) << endl;
}