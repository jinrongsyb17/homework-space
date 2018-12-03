#include<iostream>
using namespace std;

class Base1 {
public:
	Base1(int i) {
		cout << "constructor of Base1"<<" "<<i << endl;
	}
};
class Base2 {
public:
	Base2(int j) {
		cout << "constructor of Base2" <<" "<<j <<endl;
	}
};

class Derived :public Base1, public Base2 {
public:
	Derived(int a,int b,int c,int d):Base1(a),Base2(b),member1(c),member2(d){}
private:
	Base1 member1;
	Base2 member2;
};

int main() {
	Derived(1, 2, 3, 4);
	system("pause");
	return 0;
}