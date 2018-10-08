#include<iostream>
using namespace std;

int getPower(int x, int y) {
	int num=1;
	for (y; y > 0; y--)
		 num *= x;
	return num;
}
double getPower(double x, int y) {
	double num=1;
	for (y; y > 0; y--)
		 num *= x;
	return num;
}

int main() {

	cout << "请输入两个数：" << endl;
	double num1;
    int num2;
	cin >> num1 >> num2;
	cout << "值为：" << getPower(num1, num2);
	system("pause");
	return 0;

}