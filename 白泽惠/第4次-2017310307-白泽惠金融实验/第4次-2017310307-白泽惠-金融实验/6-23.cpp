// ConsoleApplication77.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

const int N = 8;
float avg(int*&);

int main()
{
	int*student = new int[N];
	int i;
	for (i = 0; i < N; i++) {
		cout << "Please input the score of student#" << i + 1 << ":";
		cin >> *(student + i);
	}
	cout << "Avg:" << avg(student) << endl;
	delete[]student;
}
float avg(int*& st) {
	int i;
	float avg = 0;
	for (i = 0; i < N; ++i){
	avg += *(st + i);
}
return avg / N;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
