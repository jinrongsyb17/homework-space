# include < iostream>
using namespace std;

int main() {
	int n = 18, m = 0;
	do {
		cout << “这个数是多少？（0~100）”;
		cin >> m;
		if (n > m)
			cout << “太小啦” << endl;
		else if (n < m)
			cout << “太大啦” << endl;
		else
			cout << “bingo!” << endl;
	} while (n != m);
	return 0;
}