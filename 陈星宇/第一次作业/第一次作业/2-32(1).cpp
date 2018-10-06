# include <iostream>
using namespace std;

int main() {
	int n = 19, m = 0;
	while (m != n) {
		cout << “这个数是多少？（0~100）”;
		cin >> m;
		if (n > m)
			cout << “太小啦” << endl;
		else if (n < m)
			cout << “太大啦” << endl;
		else
			cout << “bingo!” << endl;
	}
	return 0;
}