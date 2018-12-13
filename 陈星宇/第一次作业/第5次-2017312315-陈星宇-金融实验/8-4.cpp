#include<iostream>
using namespace std;

class Counter {
public:
	Counter(int v=0):value(v){}
	int getValue() const {
		return value;
	}
	void setValue(int v) {
		value = v;
	}
	Counter operator+(const Counter &);
private:
	int value;
};

Counter Counter::operator+(const Counter & c) {
	return Counter(value + c.getValue());
}

int main() {
	Counter c1(2), c2(3), sum;
	sum = c1 + c2;
	cout << "c1: " << c1.getValue() << endl;
	cout << "c2: " << c2.getValue() << endl;
	cout << "sum: " << sum.getValue() << endl;
	return 0;
}