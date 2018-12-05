#include<iostream>
using namespace std;

class point {
public:
	point(double xx=0, double yy=0) :x(xx) ,y(yy) {};
	point(point &p) :x(p.x), y(p.y) {};
	point operator++() {
		return point(x + 1, y + 1);
	};
	point operator++(int) {
		return point(x + 1, y + 1);
	}; 
	point operator--() {
		return point(x - 1, y - 1);
	};
	point operator--(int) {
		return point(x - 1, y - 1);
	};
	void display() {
		cout << "(" << x << "," << y<< ")" << endl;
	};
private:double x, y;
};

int main() {
	point a(5.7, 4.5), b,c;
	cout << "a: ";
	a.display();
		b = a++;
		cout << "a++: ";
	b.display();
	b = a--;
	cout << "a--: ";
	b.display();
	cout << "++a: ";
	b = ++a;
	b.display();
	b = --a;
	cout << "--a: ";
	b.display();
	system("pause");
	return 0;
}