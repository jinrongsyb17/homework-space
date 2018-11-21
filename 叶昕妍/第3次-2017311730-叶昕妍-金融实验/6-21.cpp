#include<iostream>
#include<string>
using namespace std;


int main() {
	string s1;
	cout << "输入一个英文句子：" << endl;
	getline(cin, s1);
	int num = 0;
	for (int i = 0; s1[i]; i++) {
		if ((s1[i] >= 'a'&&s1[i] <= 'z') || (s1[i] >= 'A'&&s1[i] <= 'Z'))
			num++;
	}
	cout << "这个句子有" << num << "个字母" << endl;
	return 0;
	system("pause");

}