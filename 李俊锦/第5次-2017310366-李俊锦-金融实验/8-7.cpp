#include<iostream>
using namespace std;


class Point {
public:
	Point(int x, int y) { X = x; Y = y; }
	~Point() {}
	Point & operator ++();  //前置操作 
	Point operator ++(int); //后置操作
	Point & operator --();  //前置操作 
	Point operator --(int); //后置操作 
	int GetX() { return X; }
	int GetY() { return Y; }
private:
	int X, Y;
};


Point& Point::operator ++()
{
	X++;
	Y++;
	return *this;
}


Point Point::operator ++(int)
{
	Point temp = *this;
	++(*this);
	return temp;
}


Point& Point::operator --()
{
	X--;
	Y--;
	return *this;
}


Point Point::operator --(int)
{
	Point temp = *this;
	--(*this);
	return temp;
}


int main()
{
	Point A(4, 6);
	cout << "A的值为:" << A.GetX() << "," << A.GetY() << endl;
	A++;
	cout << "A的值为:" << A.GetX() << "," << A.GetY() << endl;
	++A;
	cout << "A的值为:" << A.GetX() << "," << A.GetY() << endl;
	A--;
	cout << "A的值为:" << A.GetX() << "," << A.GetY() << endl;
	--A;
	cout << "A的值为:" << A.GetX() << "," << A.GetY() << endl;
	return 0;
}