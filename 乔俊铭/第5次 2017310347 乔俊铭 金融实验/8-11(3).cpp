#include<iostream>
using namespace std;

class shape
{
public:
	shape() {};
	virtual void getVertexCount() = 0;
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
	float getprime() {
		return 2 * 3.14*radius;
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
	float getperim() {
		return (2 * length + 2 * width);
	};
};
class square : public rectangle {
public: square(float l);
		void getVertexCount() { cout << "该图形有4个顶点" << endl; };
		~square() {};
};
square::square(float l) :rectangle(l, l) {};

void fun(shape *ptr) {
	ptr->getVertexCount();
}

int main() {
	square a1(4);
	fun(&a1);
	system("pause");
	return 0;
}