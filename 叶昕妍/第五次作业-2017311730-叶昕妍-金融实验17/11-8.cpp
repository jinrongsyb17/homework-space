#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "请输入一个十进制整数：";
	cin >> n;
	cout << "它的十进制形式为：" << dec << n << endl;
	cout << "它的八进制形式为：" << oct << n << endl;
	cout << "它的十六进制形式为：" << hex<< n << endl;
	system("pause");
	return 0;
}