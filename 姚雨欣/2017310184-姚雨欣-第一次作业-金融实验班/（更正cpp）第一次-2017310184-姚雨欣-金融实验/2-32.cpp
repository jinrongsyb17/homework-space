#include <iostream>
using namespace std;
int main() {
	int n = 18;
	int m = 0;
	while (m != n) {
		cout << "请猜这个数" << endl;
		cin >> m;8
		if (n > m)
			cout << "你猜的太小了" << endl;
		else if (n < m)
			cout << "你猜的太大了" << endl;
		else
			cout << "你猜对了" << endl;
	}system("pause");
		return 0;

}