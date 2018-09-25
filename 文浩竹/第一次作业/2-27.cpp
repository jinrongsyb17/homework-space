#include<iostream>
using namespace std;
int main() {
	cout << "你考试考了多少分？（0~100）" << endl;
	int score;
	cin >> score;
	if (score >= 90 && score <= 100)
		cout << "优" << endl;
	else if (score < 90 && score >= 80)
		cout << "良" << endl;
	else if (score < 80 && score >= 60)
		cout << "中" << endl;
	else if (score < 60 && score >= 0)
		cout << "差" << endl;
	else
		cout << "wrong input" << endl;
	system("pause");
	return 0;
}