#include<iostream>
using namespace std;
class BaseClass{
	public:
		virtual~BaseClass(){
			cout<<1<<endl;	
		}
};
class DerivedClass:public BaseClass{
	public:
		~DerivedClass(){
			cout<<2<<endl;
		}
};
int main(){
	BaseClass*bp=new DerivedClass;
	delete bp;
	return 0;
}
