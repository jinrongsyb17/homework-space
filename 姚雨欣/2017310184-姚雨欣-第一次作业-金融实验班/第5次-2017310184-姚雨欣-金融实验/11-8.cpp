#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "输入十进制整数";
	cin >> n;
	cout << "它的十进制形式是" << dec << n << endl;
	cout << "它的八进制形式为" << oct << n << endl;
	cout << "它的十六进制形式为" << hex << n << endl;
	return 0;
}
