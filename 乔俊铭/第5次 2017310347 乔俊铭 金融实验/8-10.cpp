#include<iostream>
using namespace std;

class point {
public:
	point(double xx = 0, double yy = 0) :x(xx), y(yy) {};
	point(point &p) :x(p.x), y(p.y) {};
	friend point operator+(const point &p1,const point &p2) {
		return point(p1.x + p2.x, p1.y + p2.y);
	};
	void display() {
		cout << "(" << x << "," << y << ")" << endl;
	};
private:double x, y;
};

int main() {
	point a(5.7, 4.1), b(2.6, 3.2), c;
	cout << "a:";
	a.display();
	cout << "b:";
	b.display();
	c = a + b;
	cout << "a+b=";
	c.display();
	system("pause");
	return 0;
}