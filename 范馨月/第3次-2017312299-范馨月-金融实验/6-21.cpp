#include<iostream>
#include<string>
using namespace std;

int calculate(string s) {
	int count = 0;
	for (int i = 0; i < s.size(); i++) {
		if ((s[i] <= 'Z'&&s[i] >= 'A') || (s[i] >= 'a'&&s[i] <= 'z'))
			count++;
	};
	return count;
}

int main() {
	string s;
	cout << "Please enter a sentence in English: " << endl;
	getline(cin, s);
	cout << "There are " << calculate(s) << " letters in the sentence";
	system("pause");
	return 0;
}