#include <iostream>
using namespace std;
class DataType {
	enum {
		character, integer, floating
	}vartype;
	union {
		char a;
		int b;
		float c;
	};
public:
	DataType(char ch) {
		vartype = character;
		a = ch;
	}
	DataType(int in) {
		vartype = integer;
		b = in;
	}
	DataType(float fl) {
		vartype = floating;
		c = fl;
	}
	void print();
};
void DataType::print() 
{
	switch (vartype)
	{
	case character:
		cout << "字符型:" << a << endl;
		break;
	case integer:
		cout << "整形:" << b << endl;
		break;
	case floating:
		cout << "浮点型:" << c << endl;
		break;
	}
}
int main(){
	DataType a('A'), b(100), c(2.22F);
	a.print();
	b.print();
	c.print();
	system("pause");
	return 0;
}