#include<iostream>
using namespace std;

class Counter {
public:
	Counter() {}
	Counter(int iniValue) {
		value = iniValue;
	}
	int getValue() {
		return value;
	}
	void add() {
		value++;
	}
	Counter operator + (Counter b) {
		return Counter(this->getValue() + b.getValue());
	}
private:
	int value = 0;
};

int main() {
	Counter counter1(2), counter2(5), counter;
	counter = counter1 + counter2;
	cout << "Counter1: " << counter1.getValue() << endl;
	cout << "Counter2: " << counter2.getValue() << endl;
	cout << "Counter: " << counter.getValue() << endl;

	system("pause");
	return 0;
}