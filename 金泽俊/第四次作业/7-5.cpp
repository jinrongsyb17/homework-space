#include<iostream>
const double PI = 3.141592653589;
class shape 
{
public:
	shape() { std::cout << "Shape's constructor" << std::endl; };
	~shape() { std::cout << "Shape's destructor" << std::endl; };
	void getArea() {};
};
class rectangle : public shape
{
public:
	rectangle(int m,int n) :shape(),m(m) ,n(n)
	{ std::cout << "rectangle's constructor" << std::endl; };
	~rectangle() 
	{std::cout << "rectangle's destructor" << std::endl; };
	int getArea() { return m*n; }
private:int m, n;
};
class circle: public shape 
{
public:circle(int r) :shape(), r(r) {};
	   double getArea() { return PI*r*r; };
private:int r;
};
class square : public rectangle
{
public:square(int n) {};
private:int n;
};