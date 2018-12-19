#include <iostream>
using namespace std;
int main() {
	int i = 20, m;
	do {
		cout << "猜下数字吧" << endl;
		cin >> m;
		if (i > m)
			cout << "你输的数字太小了" << endl;
		else if (i < m)
			cout << "你输的数字太大了" << endl;
		else
			cout << "你猜对了" << endl;

	} while (i != m);
	system("pause");
	return 0;

}