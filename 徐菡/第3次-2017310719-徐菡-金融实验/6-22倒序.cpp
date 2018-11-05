// 6-22倒序.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void reverse(string & s){
	for (int l = s.length(); l >= 1;l--){
		cout << s[l-1];
	}
}

int main(){
	string s;
	cout << "请输入一个字符串：" << endl;
	cin >> s;
	reverse(s);
	return 0;
}
