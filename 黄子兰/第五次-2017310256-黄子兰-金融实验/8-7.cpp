#include<iostream.h>

class Point{
public:
	Point (int x=0,int y=0):x(x),y(y){}
	~Point(){}
public:
	int show(){cout<<"("<<x<<","<<y<<")"<<endl; return 0;}
public:
	Point operator ++();
	Point operator --();
	Point operator ++(int);
	Point operator --(int);
private:
	int x,y;
};

Point  Point::operator ++(){
	Point po;
	po.x=x+1;
	po.y=y+1;

	x+=1;
	y+=1;
	return po;
}

Point  Point::operator --(){
	Point po;
	po.x=x-1;
	po.y=y-1;

	x-=1;
	y-=1;
	return po;
}

Point  Point::operator ++(int){
	Point po;
	po.x=x;
	po.y=y;

	x+=1;
	y+=1;
	return po;
}
Point  Point::operator --(int){
	Point po;
	po.x=x;
	po.y=y;

	x-=1;
	y-=1;
	return po;
}
int main(){
	Point po(1,2);
	Point po1(2,3);
	Point po2(4,5);
	cout<<"position po"<<po.show()<<endl;
	cout<<"position po1"<<po1.show()<<endl;
	cout<<"position po2"<<po2.show()<<endl;
	cout<<"_________"<<endl;
	po=po1++;
	cout<<"position po"<<po.show()<<endl;
	cout<<"position po1"<<po1.show()<<endl;
	po=po2--;
	cout<<"position po"<<po.show()<<endl;
	cout<<"position po2"<<po2.show()<<endl;
	po=++po1;
	cout<<"position po"<<po.show()<<endl;
	cout<<"position po1"<<po1.show()<<endl;
	po=--po2;
	cout<<"position po"<<po.show()<<endl;
	cout<<"position po2"<<po2.show()<<endl;
	return 0;
}
