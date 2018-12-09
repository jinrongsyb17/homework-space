#include <iostream>
using namespace std;

class shape
{
public:
	shape() {}
	~shape() {}
	virtual float getArea() = 0;
	virtual float getPerim() = 0;
	virtual int getVertexCount()const = 0;

};
class circle :public shape
{
public:
	circle(float radius) :itsRadius(radius) {}
	~circle() {}
	float getArea() {
		return 3.14*itsRadius*itsRadius;
	}
	float getPerim() {
		return 6.28*itsRadius;
	}
	virtual int getVertexCount()const { return 0; }

private:
	float itsRadius;

};
class rectangle :public shape
{
public:
	rectangle(float len, float width) :itsLength(len), itsWidth(width) {};
	~rectangle() {};
	virtual float getArea() {
		return itsLength*itsWidth;
	}
	float getPerim() {
		return 2 * itsLength + 2 * itsWidth;
	}
	virtual float GetLength() {
		return itsLength;
	}
	virtual float GetWidth() {
		return itsWidth;
	}
	virtual int getVertexCount()const { return 4; }
protected:
	float itsWidth;
	float itsLength;
};
class square :public rectangle
{
public:
	square(float len) :rectangle(len, len) {};
	~square() {};
	virtual float getArea() {
		return itsLength*itsWidth;
	}
	float getPerim() {
		return 2 * itsLength + 2 * itsWidth;
	}
	virtual float GetLength() {
		return itsLength;
	}
	virtual float GetWidth() {
		return itsWidth;
	}
	virtual int getVertexCount()const { return 4; }


};


int main() {
	shape*sp;

	sp = new circle(6);
	cout << "The area of the circle is " << sp->getArea() << endl;
	cout << "The perimeter of the circle is " << sp->getPerim() << endl;
	cout << "The vertex of the circle is " << sp->getVertexCount() << endl;
	delete sp;

	sp = new rectangle(8, 10);
	cout << "The area of the rectangle is " << sp->getArea() << endl;
	cout << "The perimeter of the rectangle is " << sp->getPerim() << endl;
	cout << "The vertex of the rectangle is " << sp->getVertexCount() << endl;
	delete sp;

	sp = new square(8);
	cout << "The area of the square is " << sp->getArea() << endl;
	cout << "The perimeter of the square is " << sp->getPerim() << endl;
	cout << "The vertex of the square is " << sp->getVertexCount() << endl;
	delete sp;
	return 0;
}