#include<iostream>
using namespace std;

class BaseClass {
public:virtual~BaseClass() {
	cout << "BaseClass destructor" << endl;
} };
class DerivedClass :public BaseClass{
public:~DerivedClass() {
	cout << "DerivedClass destructor" << endl;
}
};
int main() {
	BaseClass*p = new DerivedClass;
	delete p;
	system("pause");
	return 0;
}