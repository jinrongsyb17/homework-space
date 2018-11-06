#include<iostream>
#include<string>
using namespace std;
string reverse(string&s) {
	if (s.length() > 1) {
		string sub = s.substr(1, s.length() - 2);
		return s.substr(s.length() - 1, 1) + reverse(sub) + s.substr(0, 1);
	}
	else
		return s;
}
int main() {
	string s;
	cout << "输入一个字符串：";
	cin >> s;
	cout << "原字符串为：" << s << endl;
	cout << "倒序反转后为：" << reverse(s) << endl;
	return 0;
}
