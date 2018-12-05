#include<iostream>
using namespace std;
class Point{
	public:
		Point&operator++();
		Point operator++(int);
		
		Point&operator--();
		Point operator--(int);
		
		Point(){xa=ya=0;
		}
		int x(){return xa;
		}
		int y(){return ya;
		}
	private:
		int xa,ya;
}; 
Point&Point::operator++(){
	xa++;
	ya++;
	return* this;
}
Point Point::operator++(int){
	Point temp=*this;
	++*this;
	return temp;
}
Point&Point::operator--(){
	xa--;
	ya--;
	return* this;
}
Point Point::operator--(int){
	Point temp=*this;
	--*this;
	return temp;
}
int main(){
	Point a;
		cout<<"a="<<a.x()<<","<<a.y()<<endl;
	a++;
		cout<<"a="<<a.x()<<","<<a.y()<<endl;
	++a;
		cout<<"a="<<a.x()<<","<<a.y()<<endl;
	a--;
		cout<<"a="<<a.x()<<","<<a.y()<<endl;
	--a;
		cout<<"a="<<a.x()<<","<<a.y()<<endl;
	return 0;
}
