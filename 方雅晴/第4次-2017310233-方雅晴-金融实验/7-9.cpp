#include<iostream>
using namespace std;

class base{
	public:
		int fn1(){return 1;};
		int fn2(){return 2;};
};

class derived:private base{
	public:
		int fn1(){return base::fn1();
		}
		int fn2(){return base::fn2();
		}
};

int main(){
	derived d;
    cout<<d.fn1()<<endl;
	cout<<d.fn2()<<endl;
	return 0;
}
