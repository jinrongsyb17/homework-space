#include <iostream>
#include <cstdio>
using namespace std;

int count(char *str) {
	int i, num = 0;
	for (i = 0; str[i]; i++) {
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			num++;
	}
	return num;
}

int main() {
	char text[100];
	cout << "Enter an English sentence: " << endl;
	gets(text);
	cout << "This sentence has " << count(text) << " characters." << endl;
}