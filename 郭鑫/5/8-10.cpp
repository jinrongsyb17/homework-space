#include "pch.h"
#include <iostream>
using namespace std;

class Point {
public:
	Point(){ x = y = 0; }
	Point(unsigned xx, unsigned yy) { x = xx; y = yy; }
	unsigned getx() { return x; }
	unsigned gety() { return y; }
	void show() { cout << "Point(" << x << "," << y << ")" << endl; }
	friend Point operator+(Point &p, int n);
	friend Point operator+(int n, Point &p);
private:
	unsigned x;
	unsigned y;
};
Point operator+(Point &p, int n) {
	Point pt = p;
	pt.x += n;
	pt.y += n;
	return pt;
}
Point operator+(int n, Point &p) {
	Point pt = p;
	pt.x += n;
	pt.y += n;
	return pt;
}
int main() {
	Point pt(1, 5);
	pt.show();
	pt = pt + 5;
	pt.show();
	pt = 10 + pt;
	pt.show();
	return 0;
}