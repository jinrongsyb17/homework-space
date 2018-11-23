#include<iostream>
using namespace std;

class shape
{
public:
	shape() {};
	~shape() {};
private:

};
class circle : public shape
{
private: float radius;

public:
	circle(float r) :radius(r) {};
	~circle() {};
	float getarea() {
		return 3.14*radius*radius;
	};
};

class rectangle : public shape {
private: float length;
		 float width;
public:
	rectangle(float l, float w) :length(l), width(w) {};
	~rectangle() {};
	float getarea() {
		return length*width;
	};
};

class square : public rectangle {
public: square(float l);
		~square() {};
};
square::square(float l) :rectangle(l, l) {};

int main() {
	circle circle1(3);
	rectangle rectangle1(4, 5);
	square square1(7);
	cout << "the area of circle1 is " << circle1.getarea()<<endl;
	cout << "the area of rectangle is " << rectangle1.getarea() << endl;
	cout << "the area of square is " << square1.getarea() << endl;

}