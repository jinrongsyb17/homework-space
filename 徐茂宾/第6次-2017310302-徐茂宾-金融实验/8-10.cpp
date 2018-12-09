#include<iostream>
using namespace std;

class point{
public:
    point(){x=y=0;}
    point(unsigned int xx,unsigned int yy){x=xx;y=yy;}
    friend point operator+(unsigned int a,point b);
    friend point operator+(point b,unsigned int a);
    void print(){cout<<"("<<x<<","<<y<<")"<<endl;}
private:
    int x;
    int y;
};

point operator+(unsigned int a,point b){
    point *c=&b;
    c->x+=a;
    c->y+=a;
    return *c;
}

point operator+(point b,unsigned int a){
    point *c=&b;
    c->x+=a;
    c->y+=a;
    return *c;
};

int main()
{
    point m(2,3);
    m.print();
    m=m+2;
    m.print();
    m=3+m;
    m.print();
    return 0;
}