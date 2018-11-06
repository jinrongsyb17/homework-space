// ConsoleApplication10.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
string reverse(string& str) {
	if (str.length() > 1) {
		string sub = str.substr(1, str.length() - 2);
		return str.substr(str.length() - 1, 1) + reverse(sub) + str.substr(0, 1);
	}
	else
		return str;
}
int main() {
	string str;
	cout << "Input:";
	cin >> str;
	cout << "Before:" << str << endl;
	cout << "After:" << reverse(str) << endl;
	return 0;
}