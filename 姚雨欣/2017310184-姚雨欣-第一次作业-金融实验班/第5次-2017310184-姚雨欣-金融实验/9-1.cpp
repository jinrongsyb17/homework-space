#include <iostream>
#include <iomanip>
#include "array.h"
using namespace std;

int main()[
	int n;
	double average, total = 0;
	cout << "输入学生人数" << endl;
	cin >> n;
	array<float>
		score(n);
	for (int i = 0; i < n; i++) {
		cout << "输入" << i + 1 << "个学生成绩" << endl;
		cin >> score[i];
		total += score[i];

	}
	average = total / n;
	cout << "平均成绩为" << setprecision(4) << average << endl;
	return 0;

]
