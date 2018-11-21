//
//  main.cpp
//  7-5
//
//  Created by Evenstar on 2018/11/20.
//  Copyright © 2018年 Evenstar. All rights reserved.
//

#include <iostream>
using namespace std;

class Shape
{
public:
    Shape(){}
    ~Shape(){}
    virtual float getArea(){return -1;}
};

class Circle: public Shape
{
public:
    Circle(float radius):itsRadius(radius){}
    ~Circle(){}
    float getArea(){return 3.14*itsRadius*itsRadius;}
private:
    float itsRadius;
};

class Rectangle: public Shape
{
public:
    Rectangle(float len,float width):itsLength(len),itsWidth(width){};
    ~Rectangle(){};
    virtual float getArea(){ return itsLength*itsWidth;}
    virtual float getLength(){return itsLength;}
    virtual float getWidth(){return itsWidth;}
private:
    float itsWidth;
    float itsLength;
};

class Square:public Rectangle
{
public:
    Square(float len);
    ~Square(){}
};

Square::Square(float len):
    Rectangle(len,len)
{
}

int main()
{
    Shape*sp;
    sp=new Circle(7);
    cout<<"The area of the Rectangle is"<<sp->getArea()<<endl;
    delete sp;
    sp=new Rectangle (2,7);
    cout<<"The area of the Rectangle is"<<sp-> getArea()<<endl;
    delete sp;
    sp=new Square(8);
    cout<<"The area of the Square is"<<sp->getArea()<<endl;
    delete sp;
    return 0;
}
