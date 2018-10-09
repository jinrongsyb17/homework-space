#include <iostream>
using namespace std;
int main() {
	cout << "你考试考了多少分:" << endl;
	int i;
	cin >> i;
	if (i <= 100 && i >= 90)
		cout << "\n优";
	if (i <= 90 && i >= 80)
		cout << "\n良";
	if (i <= 80 && i >= 60)
		cout << "\n中";
	if (i <= 60 && i >= 0)
		cout << "\n差";
	return 0;
}
