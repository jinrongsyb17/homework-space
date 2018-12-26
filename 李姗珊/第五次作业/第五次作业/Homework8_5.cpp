#include<iostream>
using namespace std;

class Shape{
public:
    Shape(){}
    ~Shape(){}
    virtual float getArea()=0;
    virtual float getPerim()=0;
};
class Circle:public Shape{
public:
    Circle(float radius){}
    ~Circle(){}
    float getArea(){return 3.14*radius*radius;}
    float getPerium(){return 6.28*radius;}
    
private:
  float  radius;
    
};

class Rectangle:public Shape{
public:
    Rectangle(float len,float width){}
    ~Rectangle(){};
    virtual float getArea(){return Width*length;}
    float getPerium(){return 2*Width*length;}
    virtual float GetLength(){return length;}
private:
    float Width;
    float length;
};

int main(){
    Shape*sh;sh=new Circle(5.0);
    cout<<"The area of the Circle is"<<sh->getArea()<<endl;
    cout<<"The perimeter of the Circle is "<<sh->getPerim()<<endl;
    delete sh;
    sh=new Rectangle(4.0,6.0);
    cout<<"The area of the Rectangle is "<<sh->getArea()<<endl;
    cout<<"The perimeter of the Rectangle is "<<sh->getPerim()<<endl;
    delete sh;
    return 0;
}
