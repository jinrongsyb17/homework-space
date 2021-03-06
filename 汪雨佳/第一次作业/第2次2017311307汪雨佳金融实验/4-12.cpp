// 4-12.cpp
#include "pch.h"
#include <iostream>
using namespace std;

class datatype
{
public:
	datatype(){}
	datatype(char a) {
		type = character;
		c = a;
	}
	datatype(int b) {
		type = integer;
		i = b;
	}
	datatype(float c) {
		type = floating_point;
		f = c;
	}
	void print();
	~datatype() {};

private:
	enum {character,integer,floating_point}type;
	union 
	{
		char c;
		int i;
		float f;
	};
};

void datatype::print() {
	switch (type)
	{
	case datatype::character:
		cout << "字符型：" << c << endl;
		break;
	case datatype::integer:
		cout << "整型：" << i << endl;
		break;
	case datatype::floating_point:
		cout << "浮点型：" << f << endl;
		break;
	}
}

int main()
{
	datatype d1('a'), d2(1), d3(3.14f);
	d1.print();
	d2.print();
	d3.print();
	return 0;
}