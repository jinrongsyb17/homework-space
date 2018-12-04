#include<iostream>
using namespace std;

class Point{
public:
	Point() {};
	Point(int newX, int newY) { x = newX; y = newY; };
	void showPoint()const {
		cout << "(" << x << "," <<y<< ")" << endl;
	}
	Point& operator++();
	Point operator++(int);
	Point& operator--();
	Point operator--(int);
private:
	int x;
	int y;
};

Point &Point::operator++() {
	x++;
	y++;
	return *this;
}

Point Point::operator++(int) {
	Point old = *this;
	++(*this);
	return old;
}
Point &Point::operator--() {
	x--;
	y--;
	return *this;
}

Point Point::operator--(int) {
	Point old = *this;
	--(*this);
	return old;
}
int main() {
	Point p1(1, 2);
	Point p2(1, 2);
	cout << "p1=";
	p1.showPoint();
	cout << "++p1 :";
	(++p1).showPoint();
	cout << "p2=";
	p2.showPoint();
	cout << "p2++ :";
	(p2++).showPoint();
	system("pause");
	return 0;
}