#include<iostream>
using namespace std;

class shape{
	public:
	virtual float getarea()=0;
	virtual float getperim()=0;
	int getvertexcount();
	virtual~shape(){}
};

class rectangle:public shape{
	public:
		rectangle(float l,float w):length(l),width(w){
		}
		float getarea(){
			return length*width;
		}
		float getperim(){
			return 2*(length+width);
		}
		virtual~rectangle(){}
	private:
		float length,width;
};

class circle:public shape{
	public:
		circle(float r):radius(r){
		}
		float getarea(){
			return 3.14*radius*radius;
		}
		float getperim(){ 
		    return 2*3.14*radius;
		}
	private:
		float radius;
};

class square:public rectangle{
public:
	square(float l):rectangle(l,l){
	}
};
int shape::getvertexcount(){
   if(dynamic_cast<circle*>(this)!=0)
   return 0;
   else if(dynamic_cast<rectangle*>(this)!=0)
   return 4;
   else return -1;	
}

int main(){
	shape *p;
	p=new circle(1);
	cout<<"圆面积："<<p->getarea()<<endl;
	cout<<"圆周长："<<p->getperim()<<endl;
	cout<<"圆顶点："<<p->getvertexcount()<<endl; 
	delete p;
	p=new rectangle(2,3);
	cout<<"长方形面积："<<p->getarea()<<endl;
	cout<<"长方形周长："<<p->getperim()<<endl;
	cout<<"长方形顶点："<<p->getvertexcount()<<endl; 
	delete p;
	p=new square(2);
	cout<<"正方形面积："<<p->getarea()<<endl;
	cout<<"正方形周长："<<p->getperim()<<endl;
	cout<<"正方形顶点："<<p->getvertexcount()<<endl; 
	delete p;
	return 0; 
}
