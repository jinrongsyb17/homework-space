#include <iostream>
#include <cstdio>
using namespace std;
int count(char * str) {
	int i, num = 0;
	for (i = 1; str[i]; i++) {
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			num++;

	}
	return num;
 }

int main() {
	char text[1000];
	cout << "输入一句话" << endl;
	gets(text);
	cout << "有" << count(text) << "个字母" << endl;
	system("pause");
}