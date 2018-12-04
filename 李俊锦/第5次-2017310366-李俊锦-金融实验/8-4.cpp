#include<iostream>
class counter {
public:
	counter();
	counter(int initialvalue);
	~counter() {};
	int getitsval()const { return itsval; };
	void setitsval(int x) { itsval = x; };
	counter operator+(const counter&);
private:
	int itsval;
};

counter::counter(int initialvalue) :itsval(initialvalue){}
counter::counter():itsval(0){}
counter::counter::operator+(const Counter &rhs)
{
	return counter(itscal + rhs.getitsval());
}
void main(){
	counter varone(2), vartwo(4), varthree;
	varthree = varone + vartwo;
	cout << "varone" << varone.getitsval() << endl;
	cout << "vartwo" << vartwo.getitsval() << endl;
	cout << "varthree" << varthree.getitsval() << endl;
}