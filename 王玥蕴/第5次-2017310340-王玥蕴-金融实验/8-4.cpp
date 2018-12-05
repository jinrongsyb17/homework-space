#include<iostream>
using namespace std;
class Counter
{
public:
	Counter() { count = 0; }
	Counter(int value) { count = value; }
	Counter operator+(Counter x);
	void set(int value) { count = value; }
	int get() { return count; }
private:
	int count;
};
Counter Counter::operator+(Counter x) {
	return Counter(this->count + x.count);
}
int main() {
	Counter a, b, c, e(10), d(20), f;
	a.set(40);
	b.set(88);
	c = a + b;
	f = e + d;
	cout << "a+b=" << c.get() << endl;
	cout << "e+d=" << f.get() << endl;
	return 0;

}
