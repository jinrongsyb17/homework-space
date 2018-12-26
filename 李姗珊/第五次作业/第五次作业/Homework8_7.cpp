#include<iostream>
using namespace std;

class Point{
    
public:
    Point&operator++();
    Point operator++(int);
    
    Point&operator--();
    Point operator--(int);
    
private:
    int x,y;
};

Point& Point::operator++(){
    x++;
    y++;
    return *this;
    
}
Point Point::operator++(int){
    Point a=*this;
    ++*this;
    return a;
}
Point& Point::operator--(){
    x--;
    y--;
    return *this;
    
}
Point Point::operator--(int){
    Point a=*this;
    --*this;
    return a;
    
}


