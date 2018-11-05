// ConsoleApplication5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class DataType {
	enum {
		character, integer, floating_point
	}idata;
	union {
		char c; int i; float f;
	};
	public:
		DataType(char cc) {
			idata = character;
			c = cc;
		}
		DataType(int ii) {
			idata = integer;
			i = ii;
		}
		DataType(float ff) {
			idata = floating_point;
			f = ff;
		}
		void iData();
};
void DataType::iData() {
	switch(idata) {
	case character:
			cout << "字符型：" << c;
			break;
	case integer:
			cout << "整型：" << i;
			break;
	case floating_point:
			cout << "浮点型：" << f;
			break;
	}
}
int main()
{
	DataType x('v'), y('1'), z(1.76F);
	x.iData();
	y.iData();
	z.iData();
	return 0;
}