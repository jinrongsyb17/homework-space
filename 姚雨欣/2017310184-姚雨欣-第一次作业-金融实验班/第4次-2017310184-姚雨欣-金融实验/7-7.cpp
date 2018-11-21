#include <iostream>
using namespace std;

class base{
public:
	base();

};

base::base() {
	cout << "现在调用了基类构造函数了" << endl;
}
class derived :public base {
public:
	derived(){}
};

derived::derived() {
	cout << "现在调用了派生类的构造函数" << endl;

}

int main() {
	derived d;
	return 0;
}