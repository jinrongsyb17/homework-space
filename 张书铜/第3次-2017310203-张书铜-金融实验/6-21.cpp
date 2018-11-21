#include <iostream>
#include <cstdio>
using namespace std;

int count (char*str)
{
	int i, s = 0;
	for (i = 0;str[i];i++)
	{
		if ((str[i] >= 'a'&&str[i] <= 'z') || (str[i] >= 'A'&&str[i] <= 'Z'))
			s++;
	}
	return s;
}

int main() 
{
	char text[100];
	cout << "请输入一个英文句子" << endl;
	gets(text);
	cout << "这个句子里的字母数为" << count(text) << endl;
}