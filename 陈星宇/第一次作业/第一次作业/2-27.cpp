#include<iostream>
using namespace std;

int main() {
	int i, score;
	cout << “你考试考了多少分？（0~100）：”;
	cin >> score;
	if (score > 100 || score < 0)
		cout << ”无效的输入”;
	else {
		i = score / 10;
		switch (i) {
		case 10:
		case 9: cout << “优”; break;
		case 8: cout << “良”; break;
		case 7:
		case 6: cout << ”中”; break;
		default: cout << “差”; break;
		}
	}
	return 0;
}