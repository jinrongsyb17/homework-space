#include<iostream>
using namespace std;

class Counter {
public:
	Counter(){}
	Counter(double c) { num = c; }
	Counter operator+(const Counter a)const;
	void display() const;
private:
	double num;
};

Counter Counter::operator+(const Counter a)const {
	return Counter(num + a.num);
}
void Counter::display()const {
	cout << num << endl;
}

int main() {
	Counter c1(1.2), c2(2.5), c3;
	cout << "c1="; c1.display();
	cout << "c2="; c2.display();
	c3 = c1 + c2;
	cout << "c1+c2="; c3.display();
	system("pause");
	return 0;
}