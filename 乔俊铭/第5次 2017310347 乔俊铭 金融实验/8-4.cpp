#include<iostream>
using namespace std;
class counter {
public:
	counter() {};
	counter(int n) :number(n) {};
	counter operator+(counter &c2) {
		return counter(number + c2.number);
	};
	void show() { cout << number << endl; }
private: int number;
 };

int main() {
	counter count1(5),count2(7),count3;
	cout << "count1=";
	count1.show();
	cout << "count2=";
	count2.show();
	count3 = count1 + count2;
	cout << "count1+count2=";
	count3.show();
	system("pause");
	return 0;
}