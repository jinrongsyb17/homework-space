#include <iostream>
using namespace std;

class point {
public:
	point &operator++();
	point operator++(int);
	point &operator--();
	point operator--(int);
	point() {
		x = y = 0;
	}
	int getx() {
		return x;
	}
	int gety() {
		return y;
	}

private:
	int x;
	int y;
};

point & point::operator++() {
	x++;
	y++;
	return *this;
}

point point::operator++(int) {
	point temp = *this;
	++*this;
	return temp;
}

point& point::operator--() {
	x--;
	y--;
}

point point::operator--(int) {
	point temp = *this;
	--*this;
}

int main() {
	point a;
	cout << "a是" << a.getx() << ","<<a.gety() << endl;
	a++;
	cout << "a是" << a.getx() << "," << a.gety() << endl;
	++a;
	cout << "a是" << a.getx() << "," << a.gety() << endl;
	a--;
	cout << "a是" << a.getx() << "," << a.gety() << endl;
	--a;
	cout << "a是" << a.getx() << "," << a.gety() << endl;
	return 0;

}