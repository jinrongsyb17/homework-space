#include"pch.h"
#include <iostream>
#include<string>
using namespace std;

string reverse(string &s) {
	if (s.length() > 1) {
		string sub = s.substr(1, s.length() - 2);
		return s.substr(s.length() - 1, 1) + reverse(sub) + s.substr(0, 1);
	}
	else
		return s;
}

int main() {
	string s;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û´®" << endl;
	cin >>s;
	cout << "×Ö·û´®µ¹ĞòÎª" << reverse(s) << endl;
	return 0;
}