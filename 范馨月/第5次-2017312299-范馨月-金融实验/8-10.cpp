#include<iostream>
using namespace std;

class Point {
public:
	Point() {}
	Point(double inputX, double inputY){
		x = inputX;
		y = inputY;
	}
	friend Point operator +(Point a, Point b);
	void print() {
		cout << "Point : x = " << this->x << "    y = " << this->y;
	}
private:
	double x;
	double y;
};

Point operator +(Point a, Point b) {
	return Point(a.x + b.x, a.y + b.y);
}

int main() {
	Point a(2, 3), b(6, 3);
	Point c = a + b;
	c.print();

	system("pause");
	return 0;
}