#include <iostream.h>
class Shape
{
public:
Shape(){}
~Shape(){}
virtual float GetArea() { return -1; } 
};
class Circle : public Shape
{
public:
Circle(float radius):itsRadius(radius){}
~Circle(){}
float GetArea() { return 3.14 * itsRadius * itsRadius; }
private:
float itsRadius;
};
class Rectangle : public Shape
{
public:
Rectangle(float len£¬ float width): itsLength(len)£¬ itsWidth(width){};
~Rectangle(){};
virtual float GetArea() { return itsLength * itsWidth; }
virtual float GetLength() { return itsLength; }
virtual float GetWidth() { return itsWidth; }
private:
float itsWidth;
float itsLength;
};
class Square : public Rectangle
{
public:
Square(float len);
~Square(){}
};
Square::Square(float len):
Rectangle(len£¬len)
{
}
void main()
{
Shape * sp;
sp = new Circle(4);
cout << "The area of the Circle is " << sp->GetArea () << endl;
delete sp;
sp = new Rectangle(3£¬6);
cout << "The area of the Rectangle is " << sp->GetArea() << endl;
delete sp;
sp = new Square(7);
cout << "The area of the Square is " << sp->GetArea() << endl;
delete sp;
}