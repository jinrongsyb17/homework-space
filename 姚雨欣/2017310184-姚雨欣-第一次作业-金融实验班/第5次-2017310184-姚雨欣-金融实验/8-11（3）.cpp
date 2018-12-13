#include <iostream>
using namespace std;

class shape {
public:
	shape() {}
	~shape() {}
	virtual float getarea() = 0;
	virtual float getperim() = 0;
	virtual int getvertexcount()const = 0;
};

class circle {
public:
	circle(float radius) :itsradius(radius) {}
	~circle() {}
	float getarea() { return 3.14*itsradius*itsradius; }
	float getperim() { return 6, 28 * itsradius; }
	virtual int getvertexcount()const { return 0; }

private:
	float itsradius;
};

class rectangle :public shape {
public:
	rectangle(float len, float width) :itslength(len), itswidth(width) {};
	~rectangle() {};
	virtual float getarea() { return itslength*itswidth; }
	float getperim() { return 2 * itslength + 2 * itswidth; }
	virtual float getlength() { return itslength; }
	virtual float getwidth() { return itswidth; }
	virtual int getvertexcount()const { return 4; }
protected:
	float itswidth;
	float itslength;

};

class square :public rectangle {
public:
	square(float len) :rectangle(len, len) {};
	~square() {};
	virtual float getarea() { return itslength*itswidth; }
	float getperim() { return 2 * itslength + 2 * itswidth; }
	virtual float getlength() { return itslength; }
	virtual float getwidth() { return itswidth; }
	virtual int getvertexcount()const { return 4; }
};



int main() {
	shape *p;
	p = new circle(5);
	cout << "area is" << p->getarea() << endl;
	cout << "perimeter is" << p->getperim() << endl;
	cout << "vertex count of the circle is" << p->getvertexcount() << endl;
	delete p;
	p = new rectangle(4, 6);
	cout << "area of rectangle is" << p->getarea() << endl;
	cout << "perimeter of rectangle is" << p->getperim() << endl;
	cout << "vertex count of square is" << p->getvertexcount() << endl;
	delete p;
	return 0;
}