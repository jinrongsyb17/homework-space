#include<iostream>
using namespace std;

class Shape {
public:
    Shape(){}
    ~Shape(){}
    virtual float getArea(){return -1;}
};

class Rectangle:public Shape {
public:
    Rectangle(float longth,float width):x(longth),y(width) {}
    ~Rectangle() {}
    float getArea() {return x*y;}
private:
    float x,y;
};

class Circle:public Shape {
public:
    Circle(float rr):r(rr) {};
    ~Circle() {}
    float getArea() {return 3.1415926*r*r;}
private:
    float r;
};

class Square:public Rectangle {
public:
    Square(float length):Rectangle(length,length) {}
    ~Square() {}
};

int main() {
    Shape *shape;
    shape=new Rectangle(3,4);
    cout<<"长方形的面积是："<<shape->getArea()<<endl;
    delete shape;
    shape=new Circle(3);
    cout<<"圆形的面积是："<<shape->getArea()<<endl;
    delete shape;
    shape=new Square(4);
    cout<<"正方形的面积是："<<shape->getArea()<<endl;
    delete shape;
    return 0;
}
