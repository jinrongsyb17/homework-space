#include <iostream>
using namespace std;

class datatype {
	enum {
		character,
		integer,
		floating
	}vartype;
	union {
		char c;
		int i;
		float f;

	};
public:
	datatype(char ch) {
		vartype = character;
		c = ch;

	}
	datatype(int ii) {
		vartype = integer;
		i = ii; 
		
	}
	datatype(float ff) {
		vartype = floating;
		f = ff;

	}
	void print();

};

void datatype::print() {
	switch (vartype) {
	case character:
			cout << "字符型" << c << endl;
			break;
	case integer:
			cout << "整型" << i << endl;
			break;
	case floating:
			cout << "双精度型" << f << endl;
			break;

	}
}



int main() {
	datatype a('c'), b(12), c(1.44f);
	a.print();
	b.print();
	c.print();
	system("pause");
	return 0;
}