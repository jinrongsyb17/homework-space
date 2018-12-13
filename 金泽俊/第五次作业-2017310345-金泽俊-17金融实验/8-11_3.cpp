#include<iostream>
using namespace std;
const double pi = 3.141592653;
class shape
{
public:
	virtual double getArea() = 0;
	virtual double getPerim() = 0;
	shape() :i(0) {};
	virtual int getVertexCount() const = 0;
private:
	int i;
};
class rectangle :public shape
{
public:
	rectangle(int a, int b, int c, int d) :a(a), b(b), c(c), d(d) {};
	double getArea() { return c*d; }
	double getPerim() { return 2 * (c + d); };
	virtual int getVertexCount() const{ return 4; }
private:
	int a, b, c, d;
};
class circle :public shape
{
public:
	circle(int a, int b, double r) :a(a), b(b), r(r) {};
	double getArea() { return pi*r*r; };
	double getPerim() { return 2 * pi*r; };
	virtual int getVertexCount() const{ return 0; }
private:
	int a, b;
	double r;
};
class Square :public rectangle
{
public:
	Square(int x, int y, int w) :rectangle(x, y, w, w) { a = x; b = y; c = w; d = w; };
private:int a, b, c, d;
};

int main()
{
	shape* sp;
	sp = new circle(2, 3, 2.1);
	cout << "Area" << sp->getArea() << endl;
	cout << "Perim" << sp->getPerim() << endl;
	cout << "Vertex" << sp->getVertexCount() << endl;
	delete sp;
	sp = new Square(2, 3, 2);
	cout << "Area" << sp->getArea() << endl;
	cout << "Perim" << sp->getPerim() << endl;
	cout << "Vertex" << sp->getVertexCount() << endl;
	delete sp;
	sp = new rectangle(2, 3, 2, 1);
	cout << "Area" << sp->getArea() << endl;
	cout << "Perim" << sp->getPerim() << endl;
	cout << "Vertex" << sp->getVertexCount() << endl;
	delete sp;

	system("pause");
	return 0;
}
