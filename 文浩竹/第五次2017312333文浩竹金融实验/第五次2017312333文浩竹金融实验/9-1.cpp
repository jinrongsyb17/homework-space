#include<iostream>
#include "Array.h"
using namespace std;

int main() {
	cout << "请输入班级的学生人数n" << endl;
	int num;
	int count = 0;
	cin >> num;
	Array<double>a(10);
	cout << "请输入他们的考试成绩" << endl;
	if (count <= num) {
		cin >> a[count++];
	}
}