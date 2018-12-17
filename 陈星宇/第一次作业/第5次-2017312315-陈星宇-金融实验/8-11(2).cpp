#include<iostream>
using namespace std;

class Shape {
public:
	virtual float getArea() = 0;
	virtual float getPerim() = 0;
	int getVertexCount() const;
};

class Circle :public Shape {
public:
	Circle(float radius) :itsRadius(radius) {}
	float getArea() {
		return 3.14 * itsRadius * itsRadius;
	}
	float getPerim() {
		return 6.28 * itsRadius;
	}
private:
	float itsRadius;
};

class Rectangle :public Shape {
public:
	Rectangle(float len, float width) :itsLength(len), itsWidth(width) {};
	virtual float getArea() {
		return itsLength * itsWidth;
	}
	float getPerim() {
		return 2 * itsLength + 2 * itsWidth;
	}
	virtual float getLength() {
		return itsLength;
	}
	virtual float getWidth() {
		return itsWidth;
	}
protected:
	float itsWidth;
	float itsLength;
};

class Square :public Rectangle {
public:
	Square(float len) :Rectangle(len, len) {};
	virtual float getArea() {
		return itsLenth * itsWidth;
	}
	float getPerim() {
		return 2 * itsLength + 2 * itsWidth;
	}
	virtual float getLength() {
		return itsLength;
	}
	virtual float getWidth() {
		return itsWidth;
	}
};

int Shape::getVertexCount() const {
	const type_info &info = typeid(*this);
	if (info == typeid(Circle))
		return 0;
	else if (info == typeid(Square) || info == typeid(Rectangle))
		return 4;
	else
		return -1;
}

int main() {
	Shape * sp;
	sp = new Circle(5);
	cout << "The area of the circle is " << sp->getArea() << endl;
	cout << "The perimeter of the circle is " << sp->getPerim << endl;
	cout << "The vertex count of the circle is " << sp->getVertexCount << endl;
	delete sp;
	sp = new Rectangle(4, 6);
	cout << "The area of the rectangle is " << sp->getArea() << endl;
	cout << "The perimeter of the rectangle is " << sp->getPerim() << endl;
	cout << "The vertex count of the rectangle is " << sp->getVertexCount() << endl;
	delete sp;
	sp = new Square(6);
	cout << "The area of the square is " << sp->getArea() << endl;
	cout << "The perimeter of the square is " << sp->getPerim() << endl;
	cout << "The vertex count of the square is " << sp->getVertexCount() << endl;
	delete sp;
	return 0;
}