#include<iostream>
using namespace std;

int main() {
	float grade[8];
	for (int i = 0; i < 8; i++) {
		cout << "请输入第"<<i+1<<"名同学的成绩" << endl;
		cin >> grade[i] ;
	};
	float average;
	float sum=0;
	for (int m = 0; m < 8; m++)
	{
		sum += grade[m];
	};
	average = sum / 8;
	cout << "平均成绩为" << average;
	system("pause");

}