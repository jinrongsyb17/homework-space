#include <iostream>
using namespace std;

class counter {
public:	
	counter(double a = 0) :m(a){}
	counter operator+(const counter &c2) const;
	void display() const;
private:
	double m;
};

counter counter::operator+(const counter &c2)const {
	return counter(m + c2.m);
}

void counter::display()const {
	cout << "(" << m << ")" << endl;

}

int main() {
	counter c1(2), c2(5), c3;
	cout << "c1="; c1.display();
	cout << "c2="; c2.display();
	c3 = c1 + c2;
	cout << "ci+c2="; c3.display();
	return 0;
	system("pause");
}