#include<iostream>
using namespace std;

class Point {
public:
	Point& operator++();
	Point operator++(int);
	Point& operator--();
	Point operator--(int);
	Point() {
		x = y = 0;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
private:
	int x, y;
};

Point&Point::operator++() {
	x++;
	y++;
	return *this;
}

Point Point::operator++(int) {
	Point temp = *this;
	++(*this);
	return temp;
}

Point&Point::operator--() {
	x--;
	y--;
	return *this;
}

Point Point::operator--(int) {
	Point temp = *this;
	--(*this);
	return temp;
}

int main() {
	Point a;
	cout << "a=(" << a.getX() << "," << a.getY() << ")" << endl;
	a++;
	cout << "a=(" << a.getX() << "," << a.getY() << ")" << endl;
	++a;
	cout << "a=(" << a.getX() << "," << a.getY() << ")" << endl;
	a--;
	cout << "a=(" << a.getX() << "," << a.getY() << ")" << endl;
	--a;
	cout << "a=(" << a.getX() << "," << a.getY() << ")" << endl;
	return 0;
}