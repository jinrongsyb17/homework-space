#include <iostream>
using namespace std;

class Base0 {
public:
	Base0(){
		cout << "调用基类构造函数" << endl;
	}
};
class Base1 :public Base0{
public:
	Base1() {
		cout << "调用派生类构造函数" << endl;
	}
};
int main(){
	Base1 A;
	system("pause");
	return 0;
}