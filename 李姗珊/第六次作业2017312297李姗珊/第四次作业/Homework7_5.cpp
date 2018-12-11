#include<iostream>
using namespace std;

class Shape{
    public :
    float area;
    float getArea();
    Shape();
    
};
class Rectangle:public Shape
{
public:
    float length;
    float width;
    float area;
    virtual float getArea();
    Rectangle();
    Rectangle(float a,float b);
    
};
Rectangle::Rectangle(){
    length=2;
    width=1;
    area=length*width;
}

Rectangle::Rectangle(float a,float b){
    length=a;
    width=b;
}
float Rectangle::getArea(){
    return length*width;
}

class Circle:public Shape
{
public:
    float radius;
    float getArea();
    Circle();
    Circle(float r);
};
Circle::Circle(){
    radius=1;
}
Circle::Circle(float r){
    radius=r;
}
float Circle::getArea(){
    return 3.1415*radius*radius;
}


class Square:public Rectangle
{
public:
    Square(){
        length=width=1;
    }
    Square(float l){
        length=width=l;
    }
    
};
int main(){
    Square a(2);
    cout<<"正方形a的面积是"<<a.getArea()<<endl;
    
    
    
    return 0;
}

int main(){
    Shape *sp;
    
    sp=new Circle(4);
    cout<<"The area of the Circle is "<<sp->getArea()<<endl;
    delete sp;
    sp=new Rectangle(3,8);
    cout<<"The area of the Rectangle is "<<sp->getArea()<<endl;
    delete sp;
    sp=new Square(2);
    cout<<"The area of the Square is "<<sp->getArea()<<endl;
    delete sp;
    
    return 0;
}

