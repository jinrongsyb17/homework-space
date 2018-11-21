#include<iostream>
using namespace std;

class Shape {
public:
	virtual float getArea() {
		return -1;
	}
};

class Circle :public Shape {
public:
	Circle(float radius):itsRadius(radius) {}
	float getArea() {
		return 3.14 * itsRadius * itsRadius;
	}
private:
	float itsRadius;
};

class Rectangle :public Shape {
public:
	Rectangle(float len, float width) :itsLength(len), itsWidth(width) {}
	virtual float getArea() {
		return itsLength * itsWidth;
	}
	virtual float getLength() {
		return itsLength;
	}
	virtual float getWidth() {
		return itsWidth;
	}
private:
	float itsWidth, itsLength;
};

class Square :public Rectangle {
public:
	Square(float len);
};

Square::Square(float len) :Rectangle(len, len) {}

int main() {
	Shape *sp;
	sp = new Circle(5);
	cout << "The area of the circle is " << sp->getArea() << endl;
	delete sp;
	sp = new Rectangle(4, 6);
	cout << "The area of the rectangle is " << sp->getArea() << endl;
	delete sp;
	sp = new Square(5);
	cout << "The area of the square is " << sp->getArea() << endl;
	delete sp;
	return 0;
}