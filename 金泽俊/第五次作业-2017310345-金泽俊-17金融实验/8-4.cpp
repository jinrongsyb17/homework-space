#include<iostream>
using namespace std;

class Counter
{public:
	Counter(int i): i(i){};
	~Counter() {};
	void show(){cout<<i<<ends;};
	friend Counter operator + (const Counter &o1, const Counter &o2);
private:
	int i;
};
Counter operator + (const Counter &o1, const Counter &o2)
{return Counter (o1.i + o2.i);}
int main ()
{
    Counter c_1(2);
    Counter c_2(3);
    Counter c_3=c_1+c_2;
    c_3.show();

    return 0;
}
