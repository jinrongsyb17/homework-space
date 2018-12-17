// 9-1 学生考试成绩.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "array.h"


using namespace std;
int main()
{
	int n;
	cout << "Enter a positive value as upper limit for student numbers: ";
	cin >> n;
	array<float> A(n);
	cout << "Enter the test scores of these students : " << endl;
	for (int i = 0; i<n; i++){
		float x;
		cin >> A[i];
	}
	float sum;
	for (int j = 0; j<n; j++){
		sum += A[j];
	}
	cout << "the average score of these students is : " << sum / n << endl;
	return 0;
}

