#include<iostream>
using namespace std;

class Point {
public:
	Point(double inputX, double inputY) {
		x = inputX;
		y = inputY;
	}
	Point() {
		x = 0;
		y = 0;
	}
	void print() {
		cout << "(" << x << " , " << y << ")" << endl;
	}
	Point* operator ++();
	Point operator ++(int);
	Point* operator --();
	Point operator --(int);
private:
	double x;
	double y;
};

Point* Point::operator++(){
	x++;
	y++;
	return this;
}

Point Point::operator++(int) {
	Point a = *this;
	x++;
	y++;
	return a;
}

Point* Point::operator --() {
	x--;
	y--;
	return this;
}

Point Point::operator --(int) {
	Point a = *this;
	x--;
	y--;
	return a;
}

int main() {
	Point a(2, 3);
	a.print();
	a++;
	a.print();
	a--;
	a.print();
	++a;
	a.print();
	--a;
	a.print();

	system("pause");
	return 0;
}