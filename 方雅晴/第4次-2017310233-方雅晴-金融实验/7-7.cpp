#include<iostream>
using namespace std;

class base{
	public:
	base(){cout<<"基类构造"<<endl; 
	}
	
}; 

class derived:public base{
	public:
		derived(){cout<<"派生类构造"<<endl;
		}
};

int main(){
	derived d;
	return 0;
}
