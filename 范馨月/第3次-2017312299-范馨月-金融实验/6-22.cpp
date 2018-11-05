#include<iostream>
#include<string>
using namespace std;

string reverse(string &s) {
	if (s.length() > 2) {
		string cut = s.substr(1, s.length() - 2);
		string result = s.substr(s.length() - 1,1)+ reverse(cut) + s.substr(0,1);
		return result;
	}
	else if (s.length() == 2) {
		return s.substr(1,1) + s.substr(0,1);
	}
	else
		return 0;
}

int main() {
	string s;
	cout << "Please enter a string: ";
	getline(cin, s);
	cout << "The reversed string is: " << reverse(s);
	system("pause");
	return 0;
}