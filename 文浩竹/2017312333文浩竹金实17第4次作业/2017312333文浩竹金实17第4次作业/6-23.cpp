#include<iostream>
#include<string>
using namespace std;

int main() {
	double grade[8];
	double sum=0;
	cout << "请输入8个人的考试成绩" << endl;
	for (int i = 0; i < 8; i++) {
		cin >> grade[i];
	}
	for (int i = 0; i < 8; i++) {
		sum += grade[i];
	}
	cout <<"他们的平均成绩为："<< sum / 8 << endl;
	system("pause");
	return 0;
}