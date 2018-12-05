// 计数器Counter.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Counter {
public:
	Counter(int n = 0) : num(n) {};
	Counter operator + (const Counter & a) const;
	void display() const;
private:
	int num;
}

Counter :: operator +(const Counter &b) const{
	return Counter(num + b.num);
}
void Counter::display() const{
	cout << num << endl;
}

int main(){
	Counter a(3), b(8), c;
	cout << "a =";
	a.display();
	cout << "b = ";
	b.display();
	c = a + b;
	cout << "c = a + b = ";
	c.display();
	return 0;
}

