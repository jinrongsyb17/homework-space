#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "你考了多少分(0-100)" << endl;
	cin >> n;
	if (n > 100 || n < 0)
		cout << "你的分数不对，要在0到100之间" << endl;
	else if (n >= 0 && n < 60)
		cout << "你的等级为差" << endl;
	else if (n >= 60 && n < 80)
		cout << "你的等级为中" << endl;
	else if (n >= 80 && n < 90)
		cout << "你的等级为良" << endl;
	else if (n >= 90 && n < 100)
		cout << "你的等级为优" << endl;
	system("pause");
	return 0;
}