#include <iostream>
using namespace std;

class Shape {
public:
	Shape() {};
	~Shape() {};
	virtual double getArea() = 0;
	virtual double getPerim() = 0;
	int getVertexCount();
};
class Rectangle :public Shape {
public:
	Rectangle(double length, double width) :len(length), width(width) {};
	Rectangle() {};
	~Rectangle() {};
	double getArea() {
		double area = len*width; return area;
	}
	double getPerim() {
		return 2 * (len + width);
	}
private:
	double len,width;
};

class Circle :public Shape {
public:
	Circle(double radius) :r(radius) {};
	~Circle() {};
	double getArea() {
		double area = 3.14*r*r;
		return area;
	}
	double getPerim() {
		return 2 * 3.14*r;
	}
private:
	double r;
};
class Square :public Rectangle {
public:
	Square(double length) :Rectangle(length, length) {};
	~Square() {};
};
int Shape::getVertexCount() {
	if (dynamic_cast<Circle*>(const_cast<Shape*>(this)) != 0)
		return 0;
	else if (dynamic_cast<Rectangle*>(const_cast<Shape*>(this)) != 0 || dynamic_cast<Square*>(const_cast<Shape*>(this)) != 0)
		return 4;
	else
		return -1;
}


int main() {
	Shape *p;
	p = new Rectangle(2, 3);
	cout << "长方形的顶点个数为:"<<p->getVertexCount() << endl;
	delete p;
	p = new Circle(5);
	cout << "圆形的顶点个数为:" << p->getVertexCount() << endl;
	delete p;
	p = new Square(6);
	cout << "正方形的顶点个数为:" << p->getVertexCount() << endl;
	delete p;
	system("pause");
	return 0;
}
