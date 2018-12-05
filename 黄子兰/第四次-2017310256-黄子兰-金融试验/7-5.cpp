#include <iostream>
#include <cmath>
#define pi 3.14

using namespace std;

class shape
{
public:
virtual float area()=0;
};
class circle:public shape
{
private:
float r;
public:
circle(float r1)
{
r=r1;
}
float area()
{
return (float)pi*r*r;
}
};
class rectangle:public shape
{
private: 
float width,height;
public:
rectangle(float w1,float h1)
{
width=w1;height=h1;
}
float area()
{
return width*height;
}
};
class square : public rectangle
{
public:
square(float len):rectangle(len,len){};
~square(){};
float area(float len)
{
return len * len;
};
};
float total(shape*s[],int n)
{
float sum=0.0;
for(int i=0;i<n;i++)
sum+=s[i]->area();
return sum;
}
int main()
{
shape* s[2];
s[0]=new circle(1);
cout<<s[0]->area()<<endl;
s[1]=new rectangle(2,4);
cout<<s[1]->area()<<endl;
s[ 2 ] = new square( 3 );
cout << s[2]->area() << endl;
cout << total( s, 3 ) << endl;
for( int i = 0; i < 3; i++ )
{
delete [] s[ i ];
}
system( "pause" );
return 0;
}  
