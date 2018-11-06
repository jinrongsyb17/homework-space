// 6-21统计字母数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main(){
	string s1;
	int n = 0;
	cout << "输入一个英文句子：" << endl;
	getline(cin, s1);
	for (int i = 0; s1[i]; i++){
		if (s1[i] >= 'a'&&s1[i] <= 'z' || s1[i] >= 'A'&&s1[i] <= 'Z')
			n++;
	}
	cout << "这个句子的字母个数为" << n << endl;
	return 0;
}


