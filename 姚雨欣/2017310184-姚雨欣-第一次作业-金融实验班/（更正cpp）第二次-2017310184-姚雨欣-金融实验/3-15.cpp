#include <iostream>
using namespace std;
int getpoint(int x, int y);
double getpoint(double x, int y);  //x与y是形参，实参是后面的number和power

int main() {
	int inumber, power;   //number和power是实参，power是次方
	double dnumber;
	int ianswer;
	double danswer;
	cout << "输入整形数据" << endl;
	cin >> inumber;
	cout << "输入双精度数据" << endl;
	cin >> dnumber;
	cout << "多少次方" << endl;
	cin >> power;
	ianswer = getpoint(inumber, power);
	danswer = getpoint(dnumber, power);
	cout << inumber << "的" << power << "次方是" << ianswer << endl;
	cout << dnumber << "的" << power << "次方是" << danswer << endl;
	system("pause");
	return 0;

}



int getpoint(int x, int y) {
	if (y == 1)
		return x;
	else if (y == 0)
		return 1;
	else if (y < 0)
		return 0;    //整型数据不能有负数次方
	else
		return (x*getpoint(x, y - 1));     //递归进行计算

}

double getpoint(double x, int y) {
	if (y == 1)
		return x;
	else if (y == 0)
		return 1;
	else if (y < 0)
		return 1 / getpoint(x, -y);
	else
		return (x*getpoint(x, y - 1));


}