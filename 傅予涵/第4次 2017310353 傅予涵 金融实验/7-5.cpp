#include<iostream>

using namespace std;

class Shape

{

	public:

	virtual float printArea() const {return 0.0;};	

};

class Circle:public Shape

{

	public:

	 Circle(float =0);

	 virtual float printArea() const {return 3.14159*radius*radius;}	

	protected:

		float radius;

};

Circle::Circle(float r):radius(r)

{

}

class Rectangle:public Shape

{

	public:

		Rectangle(float =0,float =0);

	virtual float printArea() const;

	protected:

		float height;

		float width;

};

Rectangle::Rectangle(float w,float h):width(w),height(h){

}

float Rectangle::printArea()const

{

	return width*height;

}

class Triangle:public Shape

{

	public:

		Triangle(float =0,float =0);

	virtual float printArea() const;

	protected:

		float height;

		float width;

};

Triangle::Triangle(float w,float h):width(w),height(h){

}

float Triangle::printArea()const

{

	return 0.5*width*height;

}

void printArea(const Shape&s)

{

cout<<s.printArea()<<endl;	

}

int main()

{

	Circle circle(12.6);

	cout<<"area of circle=";

	printArea(circle);

	Rectangle rectangle(4.5,8.4);

	cout<<"area of rectangle=";

	printArea(rectangle);

	Triangle triangle(4.5,8.4);

	cout<<"area of triangle=";

	printArea(triangle);

}

