#include<iostream>
class point
{
public:
	point(int x, int y) :x(x), y(y) {};
	~point() {};
	point operator ++();
	point operator ++(int);
	point operator --();
	point operator --(int);
private:
	int x, y;
}
point::operator++()
{return point(x++, y++);}
point point::operator++(int) 
{point old = *this;
++(*this);
return old;
}
point point::operator--() 
{return point(x--, y--);}
point point::operator--(int) 
{point old = *this;
	--(*this);
	return old;
}
