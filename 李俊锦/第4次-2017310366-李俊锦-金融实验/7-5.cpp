#include <iostream>
using namespace std;

const float PI = (float)3.14159;

class Shape{
public:
    virtual float CalCircumference()=0;
    virtual float CalArea()=0;
};

//圆形
class Roundness: public Shape{
public:
    Roundness(float r):radius(r)
    {}

    virtual float CalCircumference()
    {
        return 2 * PI * radius;
    }

    virtual float CalArea()
    {
        return PI * radius * radius;
    }
private:
    float radius;
};

//正方形
class Square: public Shape{
public:
    Square(float w):width(w)
    {}

    virtual float CalCircumference()
    {
        return 4 * width;
    }

    virtual float CalArea()
    {
        return width * width;
    }
private:
    float width;
};

//长方形
class Rectangle: public Shape{
public:
    Rectangle(float w, float h):width(w), hight(h)
    {}

    virtual float CalCircumference()
    {
        return 2 * (width + hight);
    }

    virtual float CalArea()
    {
        return hight * width;
    }
private:
    float width;
    float hight;
};

void main()
{
    Shape* roud = new Roundness(3);
    Shape* squ = new Square(3);
    Shape* rang = new Rectangle(3, 4);

    cout<<"圆形的周长:"<<roud->CalCircumference()<<" 面积："<<roud->CalArea()<<endl;
    cout<<"正方形的周长:"<<squ->CalCircumference()<<" 面积："<<squ->CalArea()<<endl;
    cout<<"长方形的周长:"<<rang->CalCircumference()<<" 面积："<<rang->CalArea()<<endl;

}
