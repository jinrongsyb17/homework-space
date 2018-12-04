#include<iostream>
using namespace std;

class Point {
public:Point(double a = 0, double b = 0) :x(a), y(b) {};
	   friend Point operator+(Point & c1, Point&c2);
	   void display();
private:double x; double y;
};

Point operator+(Point & c1,Point & c2)
{
	return Point(c1.x+c2.x,c1.y+c2.y);
}

void Point::display() 
{
	cout << "Point(" << x << "," << y << ")" << endl;
}
int main() {
	Point c1(1, 1), c2(2, 3), c3;
	c1.display(); c2.display();
	c3 = c1 + c2;
	c3.display();
	system("pause");
	return 0;
}
