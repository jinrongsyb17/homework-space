#include<iostream>
using namespace std;

class Point {
public:Point() { n = 0; }
	   Point &operator++();
	   Point operator++(int);
	   Point &operator--();
	   Point operator--(int);
	   void display() { cout << n << endl; }
private:int n;
};
Point &Point::operator++() {
	n++;
	return *this;
}
Point Point::operator++(int) {
	Point old = *this;
	++(*this);
	return old;
}

Point & Point::operator--()
{   n--;
	return *this;
}

Point Point::operator--(int)
{	Point old = *this;
	--(*this);
	return old;
}
int main() {
	Point a;
	cout << "a的值为："; a.display();
	a++;
	cout << "a的值为："; a.display();
	++a;
	cout << "a的值为："; a.display();
	a--;
	cout << "a的值为："; a.display();
	--a; 
	cout << "a的值为："; a.display();
	system("pause");
	return 0;
}
