typedef unsigned short ina;
#include<iostream>
using namespace std;
class Counter{
	public:
		Counter();
		Counter(ina a);
		~Counter(){
		}
		ina get()const{return v;
		}
		void set(ina x){v=x;
		}
		Counter  operator+(const Counter &);
	private:
		ina v;		
}; 
Counter::Counter(ina a):
v(a){
}
Counter::Counter():
	v(0){
	}
	Counter Counter::operator+(const Counter & rhs){
		return Counter(v+rhs.get());
	}
	int main(){
		Counter m(1),n(2),p;
		p=m+n;
		cout<<p.get()<<"="<<m.get()<<"+"<<n.get();
		return 0;
	}
