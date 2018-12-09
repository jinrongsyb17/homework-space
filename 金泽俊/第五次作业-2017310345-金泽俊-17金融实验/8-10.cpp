#include<iostream>
using namespace std;
class point
{public:
point(int x,int y):x(x),y(y){};
void show(){cout<<"("<<x<<","<<y<<")"<<ends;};
friend point operator+ (const point &c1, const point &c2);

private:
int x,y;
};
point operator+ (const point &c1, const point &c2)
{
return point (c1.x+c2.x,c2.y+c2.y);
}
int main ()
{ point a(2,5);
point b(3,4);
point c=a+b;
c.show();

return 0;
}
