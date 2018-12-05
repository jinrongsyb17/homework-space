#include<iostream>
using namespace std;
class Fraction						
{
	friend ostream& operator<<(ostream& out, const Fraction& x);
private:
	int den;						
	int num;						
public:
	Fraction(int d = 1, int n = 0) :den(d), num(n) {}
	Fraction& operator++()			
	{
		num += den;					
		return *this;
	}
	const Fraction operator++(int)	
	{
		Fraction old(*this);		
		++(*this);					
		return old;
	}
};

ostream& operator<<(ostream& out, const Fraction& x)
{
	out << x.num << endl;
	return out;
}

int main(void)
{
	Fraction b(10, 10);
	cout << b++ << endl;
	cout << ++b << endl;

	return 0;
}