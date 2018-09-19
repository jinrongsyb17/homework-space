#include<iostream>
using namespace std;
int main() {
	int grade;
	cout << "你考试考了多少分？（0~100）" << endl;
	cin >> grade;
	if (grade >= 90 && grade <= 100)
		cout << "你的成绩等级为优。";
	else if (grade >= 80 && grade < 90)
		cout << "你的成绩等级为良。";
	else if (grade >= 70 && grade < 80)
		cout << "你的成绩等级为中。";
	else if (grade >= 0 && grade < 60)
		cout << "你的成绩等级为差。";
	else
		cout << "你的成绩输入有误。";
	system("pause");
	return 0;
}