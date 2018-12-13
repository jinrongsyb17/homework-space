#include<iostream>
using namespace std;

class Point {
public:
	Point() {};
	Point(int newX, int newY) { x = newX, y = newY; };
	void showPoint() { cout << "(" << x << "," << y << ")"<<endl; }
	friend Point operator+(const Point &p1, const Point &p2);
private:
	int x;
	int y;
};

Point operator+(const Point &p1, const Point &p2) {
	return Point(p1.x + p2.x, p1.y + p2.y);
}

int main() {
	Point p1(1, 2), p2(2, 3),p3;
	cout << "p1=";
	p1.showPoint();
	cout << "p2=";
	p2.showPoint();
	p3 = p1 + p2;
	cout << "p3=";
	p3.showPoint();
	system("pause");
	return 0;
}
