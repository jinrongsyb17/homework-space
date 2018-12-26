#include<iostream>
using namespace std;

class Shape{
public:
    Shape(){}
    ~Shape(){}
    virtual float getArea()=0;
    virtual float getPerim()=0;
    int getVertexCount() const;
};
class Circle:public Shape{
public:
    Circle(float radius){}
    ~Circle(){}
    float getArea(){return 3.14*radius*radius;}
    float getPerium(){return 6.28*radius;}
    
private:
    float radius;
};

class Rectangle:public Shape{
public:
    Rectangle(float len,float width):length(len),width(width){};
    ~Rectangle(){};
    virtual float getArea(){return length*width;}
    float getPerium(){return 2*length+2*width;}
    virtual float Getlength(){return length;}
    virtual float GetWidt(){return width; }
protected:
    float width;
    float length;
};

class Square:public Rectangle{
public:
    Square(float len):Rectangle(len,len){};
    ~Square(){};
    virtual float getArea(){return length*width;}
    float getPerium(){return 2*length+2*width;}
    virtual float getLength(){return length;}
    virtual float getWidth(){return width;}
    
};

int Shape::getVertexCount() const{
 if (dynamic_cast<Circle*> (const_cast<Shape*> (this)) !=0)
     return 0;
 else if (dynamic_cast<Rectangle*>(const_cast< Shape*>(this))!=0)||dynamic_cast< Square*>(const_cast< Shape*>(this))=0)
     return 4;
 else
     return -1;
}
int main(){
   Shape * sp;
    sp=new Circle(5);
    cout<<"The area of the Circle is "<<sp->getArea()<<endl;
    cout<<"The perimeter of the Circle is "<<sp->getPerim()<<endl,
    cout<< "The vertex count of the Circle is "<<sp->getVertexCount()<<endl;
    delete sp;
    sp= new Rectangle(4,6);
    cout<<"The area of the Rectangle is "<<sp->getArea()<<endl;
    cout<<"The perimeter of the Rectangle is "<<sp->getPerim()<<endl;
    cout<<"The vertex count of the Rectangle is "<<sp->getVertexCount()<<endl;
    delete sp;
    sp=new Square(6);
    cout<<"The area of the Square is "<<sp->getArea()<<endl;
    cout<<"The perimeter of the Square is "<<sp->getPerim()<<endl;
    cout<<"The vertex count of the Square is "<<sp->getVertexCount()<<endl;
    delete sp;
    return 0;
}
    

