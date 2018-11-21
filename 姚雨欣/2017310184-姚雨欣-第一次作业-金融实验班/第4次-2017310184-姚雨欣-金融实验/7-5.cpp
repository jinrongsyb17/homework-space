#include <iostream>
using namespace std;

class shape {
public:
	shape() {};
	~shape() {};
	virtual float getarea() { return -1; };

};

class rectangle :public shape {
	rectangle(float length, float width) :a(length), b(width) {};
	~rectangle() {};
	virtual float getarea() { return a*b; }
	virtual float getlength() { return a; }
	virtual float getwidth() { return b; }
private:
	float a;
	float b;
	
	
};

class circle :public shape {
	circle(float radius) :r(radius) {};
	~circle() {};
	float getarea() { return 3.14*r*r; }
private:
	float r;

};

class square :public rectangle {
public:	
	square(float length);
	~square() {};
	
};
square::square(float length):rectangle (length,length){}

int main() {
	shape *p;
	p = new circle(1);
	cout << "圆形的面积是" << p->getarea() << endl;
	delete p;
	p = new rectangle(2,8);
	cout << "矩形的面积是" << p->getarea() << endl;
	delete p;
	p = new square(3);
	cout << "正方形的面积是" << p->getarea() << endl;
	delete p;
	return 0;
	system("pause");
}



