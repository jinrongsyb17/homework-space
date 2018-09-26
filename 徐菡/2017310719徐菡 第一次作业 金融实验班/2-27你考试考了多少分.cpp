// ConsoleApplication5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int score;
	cout << "你考试考了多少分？（0-100）：";
	cin >> score;
	if (score >= 90 && score <= 100);
		cout << "优"<< endl;
	if (score >= 80 && score < 90);
			cout << "良"<< endl;
	if (score >= 60 && score < 80);
				cout << "中"<< endl;
				if (score >= 0 && score< 60);
				cout << "差"<< endl;
	return 0;
}

