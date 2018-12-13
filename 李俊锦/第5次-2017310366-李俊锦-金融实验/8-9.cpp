#include <iostream>
using namespace std;
class BaseClass
{
public:
	virtual ~BaseClass() { cout << "BaseClass killed" << endl; }
};
class DerivedClass :BaseClass
{
public:
	~DerivedClass() { cout << "DerivedClass killed" << endl; }
};
int main()
{
	BaseClass *pBase = (BaseClass*)new DerivedClass();
	delete pBase;
	return 0;
}